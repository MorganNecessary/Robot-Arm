void stateSwap(){
    if (conState == 1){
      conState = 2;
      digitalWrite(12,HIGH);
    }
    else{
      conState = 1;
      digitalWrite(12,LOW);
    }
    delay(1000);
}
