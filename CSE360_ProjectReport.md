**CSE360: Computer Interfacing**

**Lab Project Report**

**Project title:** Smart cane for object detection and obstacle
............... detection.

**Name** : Umme Mahbuba Tamanna

**ID** : 17301024

**Section** : 02


**Introduction**

A cane or more specifically a white cane is a device that is used by
people who are visually impaired. Cane allows its user to scan their
surroundings for obstacles or orientation marks. But it is a matter of
sorrow that with speeding technological world, a white cane did not get
any modernised. So for the betterment of the user, a cane which has
smart object and obstacle detection method, will come handy while they
use public space.

**Application**

Cane detects objects, obstacles for the visually impaired people as they
use any sort of public space. Cane does not serve its purpose all the
time as it often fails to identify edges, objects on their way.
Therefore, to rectify its usability, smart object detection, edge
detection will notify the user of any object, obstacle or edge nearby
the device beforehand.

**Technology and Tools**

-   Arduino Uno

-   Ultrasonic Sensor

-   IR Sensor

-   Buzzer

-   Breadboard

-   Jumper Wires

**Working mechanism of Sensors**

**Ultrasonic Sensor**

Ultrasonic sensors work by emitting sound waves at a frequency too high
for humans to hear. They then wait for the sound to be reflected back,
calculating distance based on the time required.

Ultrasonic sensor working principle is similar to sonar or radar which
evaluates the target/object attributes by understanding the received
echoes from sound/radio waves correspondingly. These sensors produce
high-frequency sound waves and analyse the echo which is received from
the sensor. The sensors measure the time interval between transmitted and received
echoes so that the distance to the target is known.

Some specifications of ultrasonic sensor are - the sensing range lies
between 40 cm to 300 cm, response time is between 50 milliseconds to 200
milliseconds, and frequency of the ultrasound wave is 120 kHz etc.

**IR Sensor**

IR sensors work by detecting infrared radiation emitted by objects in
the environment. They typically use a photodiode or a phototransistor to
detect the IR radiation and convert it into an electrical signal that
can be processed and analysed.

IR sensors use infrared radiation of wavelength between 0.75 to 1000µm
which falls between visible and microwave regions of electromagnetic
spectrum. IR region is not visible to human eyes. Infrared spectrum is
categorized into three regions based on its wavelength i.e. Near
Infrared (0.75µm to 3 µm), Mid Infrared (3 µm to 6 µm), and Far Infrared
(\> 6 µm).

**Programming Language:** C++

**Connection with ICs:**

We will connect following devices with the IC ARDUINO:

1.  Ultrasonic sensor as follows:

-   VCC pin to 5V on the Arduino

-   GND pin to GND on the Arduino

-   TRIG pin to pin 7 on the Arduino

-   ECHO pin to pin 6 on the Arduino

2.  IR sensor as follows:

-   VCC pin to 5V on the Arduino

-   GND pin to GND on the Arduino

-   OUT pin to pin 2 on the Arduino

3.  Buzzer to pin 8 on the Arduino.


**Dataflow from sensors through ICs to I/O devices:**

The code will read the values from the ultrasonic sensor and IR sensor,
and determine whether or not there are obstacles or edges in front of
the user.

If an obstacle is detected, the buzzer will sound at a rate of 1 Hz. If
an edge is detected, the buzzer will sound at a rate of 2 Hz.


**Conclusion:**

Visual impairment or blindness is a condition which affects most of the
people in the world. They face many challenges in their daily life in
doing various tasks. The difficulty is the hardest when they move to an
unfamiliar location. Hence, there is a need of such a thing as in "A
smart Cane" to minimize the problems of visually impaired people so as
to make them travel independently and help them to detect obstacles
around them to avoid any accidents.
