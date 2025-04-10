# Task-2

Aim: To make a object counter which uses an IR sensor to count the number of passing objects and displays the count on an I2C LCD display using Arduino UNO.

Thought process and applications: As soon as I got the question I got the logic for the object counter in my mind and i didnt know the connections for the LCD display, I researched about the LCD display(standard 16x2 one) which is was on TinkerCAD ( I was trying to simulate the circuit in TinkerCAD first and then physically) which unfortunately wasnt the one which I would be working on, it was an I2C LCD display which simplified the whole wiring process in the standard 16x2 LCD display. Then I worked upon the code, the logic for object counter was the one which I wrote first and then the LCD one. After going through arduino forums and docs I was able to write the code for the LCD part. This circuit can be used for object counting (as the aim suggests) this can be implemented along with the barcode scanner or to find any MISSING product along the convoryer belt(considering it is full) which carries luggage or any product lets say in a factory, this can be used as error detecting in the systems which is used along(missing baggage in convoyer belt) with it. The speed at which the IR detects is fast hence it should be calibrated correctly depending on the application. 

Procedure: 

Connect the SDA pin of the I2C LCD display to the Arduino analog pin A4 and SCL pin of the same to Arduino analog pin A5 and GND of I2C to GND of Arduino and VCC to 5V of Arduino.

Connect the GND of IR sensor to 2nd GND of Arduino, VCC of IR sensor to 2nd 5V of Arduino and Output of IR sensor to Digital Pin 4.

Now connect the Arduino UNO to the laptop using an USB A to USB B connector.

Launch Arduino IDE and upload the required sketch.

Resources: 
  Arduino Docs and Forums, Google, TinkerCAD and Reddit.
