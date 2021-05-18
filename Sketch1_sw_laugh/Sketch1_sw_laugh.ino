///Globalne przełączniki
int switch_vector=LOW, switch_LED=LOW,switch_micro=LOW;
///inputy outputy
//LEDS
int LED_in=4, LED_out=5;  
int LED_sign_out=10;
//laugh
int laugh_in=2, laugh_out=3;
//Przód/tył
int vector_in=6 ,vector_out=7;
//micro_switch
int micro_in=11, micro_out=12;
void setup() {
  //Serial, nie ruszać
  Serial.begin(9600);
  //LEDS
  pinMode(LED_in,INPUT_PULLUP);
  pinMode(LED_out,OUTPUT);
  //laugh
  pinMode(laugh_in,INPUT_PULLUP);
  pinMode(laugh_out,OUTPUT);
  //vectors
  pinMode(vector_in,INPUT_PULLUP);
  pinMode(vector_out,OUTPUT);
  //led
  pinMode(LED_sign_out,OUTPUT);
  //microfon_switch
  pinMode(micro_in,INPUT_PULLUP);
  pinMode(micro_out,OUTPUT);
}

void loop() {
    slicz(vector_in,vector_out,switch_vector); //Kierunek przód/tył
    slicz(LED_in,LED_out,switch_LED);       //Ledy smutny/wesoły, do domyślnego 
    slicz(micro_in,micro_out,switch_micro);
    laughter(laugh_in,laugh_out);
  //Serial.print("Switch_LED: ");Serial.println(switch_LED);
    //Serial.print("Switch_micro: ");Serial.println(switch_micro);
    //Serial.print("Switch_vector: ");Serial.println(switch_vector);
}
//Slicz działa na prostej zasadzie. Guzik zostaje kliknięty, zmienna globalna się zmienia z 0 na 1 i z 1 na 0.
//Nie jestem pewien czy digitalWrite nie powinien być poza ifem. Delay jest po to aby uniknąć kilkukrotnego aktywowania się
//ifa przy jednym naciśnięciu

void slicz(int in, int out, int &switcz){
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
