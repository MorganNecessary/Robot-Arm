void servoIncremental (int pin, String dir){
  switch (pin) {
    case 9:
        if (dir == "CW"){
          if (posOne < 140) {
            posOne += 5;  // if servo is not already up to 180, increase in 5 degree increments
            if (posOne > 140){
              posOne = 140;
            }
          }
        }
        
        if (dir == "CCW"){   
          if (posOne > 0) {
            posOne -= 5;  // if servo is not already down to 0, decrease in 5 degree increments
            if (posOne < 0){
              posOne = 0;
            }
          }     
        }
        servoOne.write(posOne);
        break;
    case 10:
        if (dir == "CW"){
          if (posTwo <140) {
            posTwo += 10;  // if servo is not already up to 180, increase in 5 degree increments
            if (posTwo > 140){
              posTwo = 140;
            }
          }
        }
        
        if (dir == "CCW"){   
          if (posTwo > 0) {
            posTwo -= 10;  // if servo is not already down to 0, decrease in 5 degree increments
            if (posTwo < 0){
              posTwo = 0;
            }
          }       
        }
        
        servoTwo.write(posTwo);
        break;
    case 11:
        if (dir == "CW"){
          if (posThree < 140) {
            posThree += 10;  // if servo is not already up to 180, increase in 5 degree increments
            if (posThree > 140){
              posThree = 140;
            }
          }
        }
        
        if (dir == "CCW"){   
          if (posThree > 0) {
            posThree -= 10;  // if servo is not already down to 0, decrease in 5 degree increments
            if (posThree < 0){
              posThree = 0;
            }
          }       
        }
        
        servoThree.write(posThree);
        break;
      case 6:
        if (dir == "CW"){
          if (posFour < 140) {
            posFour += 10;  // if servo is not already up to 180, increase in 5 degree increments
            if (posFour > 140){
              posFour = 140;
            }
          }
        }
        
        if (dir == "CCW"){   
          if (posFour > 0) {
            posFour -= 10;  // if servo is not already down to 0, decrease in 5 degree increments
            if (posFour < 0){
              posFour = 0;
            }
          }       
        }
        
        servoFour.write(posFour);
        break;        
  }
  delay(200);
}
