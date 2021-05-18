void setup()
{
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(digitalRead(8));
  if(digitalRead(8)==1){
    digitalWrite(9,HIGH);
    //Tutaj dodaj wykrywanie dźwięku i uruchamianie silniku :>
  }
  else{
    digitalWrite(9,LOW);
  }
}
