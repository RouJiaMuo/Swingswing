int Distance = 0;  
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}

void loop() {
  
  digitalWrite(9, HIGH);
  delayMicroseconds(200);          
  digitalWrite(9, LOW); 
  delayMicroseconds(200);
  Distance = Distance + 1; 
  
  
  if (Distance == 1250)
  {

    if (digitalRead(8) == LOW)
    {
      digitalWrite(8, HIGH);
    }
    else
    {
      digitalWrite(8, LOW);
    }

    Distance = 0;
    
    digit1 = digit1 - 0.3;//reduce each timing by 0.3ms 
    delay(digit1); //How can I loop line 34 and 35 when digit1 hits 0?
    //Idealy, I want to make the digit1 pause for a random time when it hits 0, and go back to 630, and pause another random time, and then reduce again.   
  }
}
