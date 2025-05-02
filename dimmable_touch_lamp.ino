int led=10;
int p=A0;
int button =3;
int val;
int state=0;
void setup()
{
  pinMode(led, state);
  pinMode(button,INPUT_PULLUP);
  
}

void loop(){
  if(digitalRead(button)==HIGH){
 val=analogRead(p);
  val=map(val,0,1023,0,255);
    analogWrite(led,val);}
     else{
       analogWrite(led,0);
     }
  delay(10);
}