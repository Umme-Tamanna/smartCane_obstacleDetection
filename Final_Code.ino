// Pin Definitions
const int irSensorPin = 2;     // IR Sensor pin
const int usTrigPin = 3;      // Ultrasonic sensor trigger pin
const int usEchoPin = 4;      // Ultrasonic sensor echo pin
const int buzzerPin = 5;      // Buzzer pin
const int switchPin = 6;      // Switch pin for turning on and off the smart cane

// Global variables
int irSensorValue = 0;        // Stores IR sensor reading
long usDuration = 0;         // Stores ultrasonic sensor duration
int usDistance = 0;          // Stores ultrasonic sensor distance
bool isEnabled = true;       // Flag to indicate if smart cane is enabled

void setup() {
  // Initialize Serial communication
  Serial.begin(9600);

  // Set pin modes
  pinMode(irSensorPin, INPUT);
  pinMode(usTrigPin, OUTPUT);
  pinMode(usEchoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP); // Use internal pull-up resistor for the switch
}

void loop() {
  // Read switch value
  bool switchValue = digitalRead(switchPin);
  
  // Update isEnabled flag based on switch value
  if (switchValue == LOW) {
    isEnabled = !isEnabled; // Toggle isEnabled flag
    delay(200); // Add a small delay for switch debounce
  }

  if (isEnabled) {
    // If smart cane is enabled, perform obstacle detection

    // Read IR sensor value
    irSensorValue = digitalRead(irSensorPin);

    // Edge detection using IR sensor
    if (irSensorValue == HIGH) {
      // If no surface detected, beep the buzzer
      digitalWrite(buzzerPin, HIGH);
      delay(500);
      digitalWrite(buzzerPin, LOW);
      delay(500);
    }

    // Obstacle detection using ultrasonic sensor
    digitalWrite(usTrigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(usTrigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(usTrigPin, LOW);

    usDuration = pulseIn(usEchoPin, HIGH);
    usDistance = usDuration * 0.034 / 2;

    if (usDistance < 30) {
      // If obstacle detected within 30cm, beep the buzzer
      digitalWrite(buzzerPin, HIGH);
      delay(200);
      digitalWrite(buzzerPin, LOW);
      delay(200);
    }
  }
}
