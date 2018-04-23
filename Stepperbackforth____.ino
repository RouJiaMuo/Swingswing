int Distance = 0;  // Record the number of steps we've taken
int digit1 = 630;
void setup() {                
  pinMode(8, OUTPUT);     
  pinMode(9, OUTPUT);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}

void loop() {
  
  digitalWrite(9, HIGH);
  delayMicroseconds(200);          
  digitalWrite(9, LOW); 
  delayMicroseconds(200);
  Distance = Distance + 1;   // record this step
  
  // Check to see if we are at the end of our move
  if (Distance == 1250)
  {
    // We are! Reverse direction (invert DIR signal)
    if (digitalRead(8) == LOW)
    {
      digitalWrite(8, HIGH);
    }
    else
    {
      digitalWrite(8, LOW);
    }
    // Reset our distance back to zero since we're
    // starting a new move
    Distance = 0;
    // Now pause for half a second
    digit1 = digit1 - 0.3;
    delay(digit1);
    
  }
}
