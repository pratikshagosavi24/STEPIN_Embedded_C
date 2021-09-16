
## CAR Heat Control System 
### BRIEF

The heat control system is basically used to control the temperature inside a car. Whenever the user or driver gets seated inside the car, the button sensor gets activated. After that, the user gets access to turn on the heater. The temperature sensor monitors the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are performed on the microcontroller, ***Atmega328***.

### CI and Code Quality

![code_quality_score](https://www.code-inspector.com/project/28865/score/svg)
![code_quality_score](https://www.code-inspector.com/project/28865/status/svg)



### Simulation

The operation of the heat control system is coded in embedded c and the working is demonstrated using a simuation software called ***SimulIDE***.
Below shown two images where in the 1st image shows the status of the simulation when the system is OFF and the second image shows the status of the system when it is ON. 

### Function

* When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
* Next the analog input from the temperature sensor is received and digitized using ADC.
* The digitized temperature input is visualized using Pulse Width Modulation.
* The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.

