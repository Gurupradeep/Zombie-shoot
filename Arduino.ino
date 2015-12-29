int ShootPin=4;
int val1=0;
int flag1=1;
int ReloadPin=2;
int val2=0;
int flag2=1;
void setup()
{
  pinMode(ShootPin,INPUT_PULLUP);
  pinMode(ReloadPin,INPUT_PULLUP);
  Serial.begin(9600);
}
void loop()
{
   val1=digitalRead(ShootPin);
   val2=digitalRead(ReloadPin);
   if(val1==LOW && flag1==1)
   { 
      Serial.write('Y');
      flag1=0;
      delay(100);
   }
   else if(val1==HIGH)
      flag1=1;
   if(val2==LOW && flag2==1)
   {  
      //Serial.println(val2);
      Serial.write('N');
      delay(100);
      flag2=0;
   }
   else if(val2==HIGH)
      flag2=1; 
  
}

