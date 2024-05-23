//#include <Servo.h>
//
//Servo myservoOne;  // create servo object to control a servo
//Servo myservoTwo;
//Servo myservoThree;
//
//int potpinOne = 0;// analog pin used to connect the potentiometer
//int potpinTwo = 1;// analog pin used to connect the potentiometer
//int potpinThree = 2;// analog pin used to connect the potentiometer
//
//int valOne = 1;// variable to read the value from the analog pin
//int valTwo = 1;// variable to read the value from the analog pin
//int valThree = 1;// variable to read the value from the analog pin
//
//void setup() {
//  myservoOne.attach(9);  // attaches the servo on pin 9 to the servo object
//  myservoTwo.attach(10);  // attaches the servo on pin 9 to the servo object
//  myservoThree.attach(11);  // attaches the servo on pin 9 to the servo object
//}
//
//void loop() {
//  valOne = analogRead(potpinOne);            // reads the value of the potentiometer (value between 0 and 1023)
//  valOne = map(valOne, 0, 1023, 0, 140);     // scale it to use it with the servo (value between 0 and 180)
//  myservoOne.write(valOne); // sets the servo position according to the scaled value
//  delay(100);                           // waits for the servo to get there
//
//  valTwo = analogRead(potpinTwo);            // reads the value of the potentiometer (value between 0 and 1023)
//  valTwo = map(valTwo, 0, 1023, 0, 140);     // scale it to use it with the servo (value between 0 and 180)
//  myservoTwo.write(valTwo); // sets the servo position according to the scaled value
//  delay(100);                           // waits for the servo to get there
//
//  valThree = analogRead(potpinThree);            // reads the value of the potentiometer (value between 0 and 1023)
//  valThree = map(valThree, 0, 1023, 0, 140);     // scale it to use it with the servo (value between 0 and 180)
//  myservoThree.write(valThree); // sets the servo position according to the scaled value
//  delay(100);                           // waits for the servo to get there
//}
