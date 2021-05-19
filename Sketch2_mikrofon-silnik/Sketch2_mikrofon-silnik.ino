int arduino_1 = 8;
int micro_in = 9,micro_out =10;

void setup()
{
  pinMode(arduino_1,INPUT); ///Input z pierwszego arduino. Jeśli 1, uruchamia wykrywanie mikrofonu
  pinMode(10,OUTPUT);
  pinMode(9,INPUT);
  Serial.begin(9600);
}

void loop()
{
  //Serial.println(digitalRead(8));
  if(digitalRead(arduino_1)==1){
    microphone(micro_in,micro_out);
  }
  else{
    //digitalWrite(9,LOW);
    Serial.println("Mikrofon nie wykrywa");
  }
}
void microphone(int in, int out){
    int val = digitalRead(in);
    //Serial.print("Mikrofon input: ");Serial.println(val);
    if(val==0){
      Serial.println("Jedziemy");
      digitalWrite(out,HIGH);
      delay(3000);
      }
     else if(val==1){
      Serial.println("Nie jedziemy!");
      digitalWrite(out,LOW);
      }
  }
