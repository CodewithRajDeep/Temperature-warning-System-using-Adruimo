## Title: Temperature-warning-System-using-Adruimo 

## Problem Statement: 
Arduino allows us to create an Internet-of-Things (IoT) system with minimum effort and knowledge in microchip hardware. We often have the need to integrate our software into various platforms 
(web, mobile, etc) with microchip hardware to interact with "the real world",for example reading temperature sensor, moving servo motors, etc.Our temperature warning system will have 1 thermistor 
and 3 LEDs, each with different colours (red, yellow, green), that connects to the Arduino. For the first iteration, we only need to turn on a specific LED colour for the corresponding temperature 
range detected by the thermistor.The next improvement of this project would lead to many possibilities, including connecting to a centralised server to collect all temperature data from various locations.

## Follow these steps: 
- clone the project using git clone {github project url}
-  Duplicate Project Template:
  
    Visit the provided template: https://wokwi.com/projects/378083746254881793
    Click on "Save a copy" to create your own project.
- Connect LEDs to Arduino:
  
  From the wokwi component library (left sidebar), drag and drop three LEDs onto the workspace.
  Connect the positive leg (longer leg) of each LED to a different digital pin on the Arduino. You can choose any three digital pins (e.g., pins 5, 6, and 7).
  Connect the negative leg of each LED to a common ground pin (GND) on the Arduino.
- Connect NTC Thermistor:
  
   Drag and drop an NTC Thermistor component from the library onto the workspace.
   Connect one leg of the thermistor to an analog pin on the Arduino (e.g., pin A0).
   Connect the other leg of the thermistor to a 10kΩ resistor.
   Connect the resistor to the 5V power pin (VCC) on the Arduino.

- Create Temperature Logic , logic is setup in C++ language.

you can edit, change and use and change the code as per the need. 


## Work demonstration: 

<img src="https://upload.wikimedia.org/wikipedia/commons/9/95/DAQ_Arduino.gif" width="256"/>
<img src="https://i.pinimg.com/originals/c7/03/e4/c703e4a8940611abd8cd4eb774790a1c.gif" width="256"/>
