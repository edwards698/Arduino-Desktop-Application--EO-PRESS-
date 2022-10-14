char Val; 
void setup(){
Serial.begin(9600); //Baud Rate 
}

void loop(){
char Val = Serial.read();
if(Val=='A')//When the button "A" on the Press is Pressed, turn on the LED on the Arduino
{ 
   digitalWrite(13,HIGH); //LED connected to pin 13 on from the Arduino
}
else if(Val == 'B')//When the button "B" on the Press is Pressed, turn off the LED on the Arduino
{
digitalWrite(13,LOW); //LED connected to pin 13 off from the Arduino
  }
}