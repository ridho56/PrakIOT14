void setup()

{
 Serial.begin (9600);
  pinMode (2 , INPUT);
}

void loop()

{
 int rain = digitalRead(2);

if(rain==1)
{
  Serial.println("Its Raining");
   delay(500);
}
else if(rain==0)
{
  Serial.println("No Rain");
   delay(500);
}



}
