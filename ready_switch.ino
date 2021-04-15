int switcz=0,switcz_micro=0;
int LED_in=6, LED_out=7;
int laugh_in=3, laugh_out=4;
int micro_out=2,micro_switch_in=8;
int relay_2_out=12;
void setup() {
  //Serial, nie ruszać
  Serial.begin(9600);
  //LEDS
  pinMode(LED_in,INPUT_PULLUP);
  pinMode(LED_out,OUTPUT);
  //laugh
  pinMode(laugh_in,INPUT_PULLUP);
  pinMode(laugh_out,OUTPUT);
  //microphone
  pinMode(A1,INPUT_PULLUP);
  pinMode(micro_out,OUTPUT);
  //micro_switch
  pinMode(micro_switch_in,INPUT_PULLUP);
  //relay_2
  pinMode(relay_2_out,OUTPUT);
  
}
void loop() {
  //Serial.println(analogRead(6));
    slicz(LED_in,LED_out);
    slicz(LED_in,relay_2_out);
    laughter(laugh_in,laugh_out);
    //microphone switch
    int switch_micro=0;
    if(digitalRead(micro_switch_in)==LOW){
      switch_micro++;
      switch_micro%2;
    }
    Serial.println(switch_micro);
    if(switch_micro==1){
      microphone(micro_out);
    }
}
void microphone(int out){
    int val = analogRead(A1);
    //Serial.println(val);
    delay(50);
    if(val>800||val<600){
      //Serial.println("DUPA");
      digitalWrite(out,HIGH);
      }
     else{
      digitalWrite(out,LOW);}
  }
void slicz(int in, int out){
  if(digitalRead(in)==LOW){
    switcz++;
    switcz=switcz%2;
    digitalWrite(out,switcz);
    delay(1000);
    }
    }
void laughter(int in, int out){
  if(digitalRead(in)==LOW){
    for(int i=0;i<3;i++){
      tone(out,2000);
      delay(220);
      tone(out,1500);
      delay(120);
      tone(out,1000);
      delay(120);
      tone(out,400);
      delay(120);
      tone(out,800);
      delay(120);
      noTone(out);
      delay(100);
      }
    }
    else{
      noTone(out);
      }
  }
