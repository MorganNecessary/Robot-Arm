//#include <Servo.h>
//
//Servo servoOne;  // create servo object to control a servo
//Servo servoTwo;
//Servo servoThree;
//Servo servoFour;
//
//int input5Pin = 7;       // define push button input pins
//int input4Pin = 5;
//int input3Pin = 4;
//int input2Pin = 3;
//int input1Pin = 2;
//
//int conState = 1;
//int blueLED = 12;
//
//int posOne = 70;// position variabel for each servo
//int posTwo = 70;//
//int posThree = 70;// 
//int posFour = 70;//
//
//void setup() {
//  servoOne.attach(9);  // attaches the servo on pin 9 to the servo object
//  servoTwo.attach(10);  
//  servoThree.attach(11);  
//  servoFour.attach(6);
//
//  pinMode(input5Pin, INPUT); //declare push button inputs
//  pinMode(input4Pin, INPUT);
//  pinMode(input3Pin, INPUT);
//  pinMode(input2Pin, INPUT);
//  pinMode(input1Pin, INPUT);
//  pinMode(blueLED, OUTPUT);
//  digitalWrite(blueLED, LOW);
//
//  servoOne.write(posOne);
//  servoTwo.write(posTwo);
//  servoThree.write(posThree);
//  servoFour.write(posFour);
//}
//
//void loop() {
//  while(digitalRead(input1Pin) != LOW && digitalRead(input2Pin) != LOW && digitalRead(input3Pin) != LOW && digitalRead(input4Pin) != LOW && digitalRead(input5Pin) != LOW) {
//    if (digitalRead(input1Pin) == LOW){
//      //forward motor a
//      switch (conState){
//        case 1:
//          servoIncremental(9, "CW");
//          break;
//        case 2:
//          servoIncremental(10, "CW");
//          break;
//      }
//    }
//    
//    else if (digitalRead(input2Pin) == LOW){
//      //reverse motor a
//      switch (conState){
//        case 1:
//          servoIncremental(9, "CCW");
//          break;
//        case 2:
//          servoIncremental(10, "CCW");
//          break;
//      }      
//    }
//    else if (digitalRead(input3Pin) == LOW){
//      //forward motor b
//      switch (conState){
//        case 1:
//          servoIncremental(11, "CW");
//          break;
//        case 2:
//          servoIncremental(6, "CW");
//          break;
//      }      
//    }
//    else if (digitalRead(input4Pin) == LOW){
//      //reverse motor b
//      switch (conState){
//        case 1:
//          servoIncremental(11, "CCW");
//          break;
//        case 2:
//          servoIncremental(6, "CCW");
//          break;
//      }
//    }
//    else if (digitalRead(input5Pin) == LOW){
//      stateSwap();
//    }
//    delay(30);
//  }
//
//
//  
//}
