int Pin3 = 3, Pin5 = 5, Pin6 = 6; 
int aPin0 = 0, dPin1 = 1, aPin1 = 1;

void setup()
{
pinMode(aPin0, INPUT);
pinMode(dPin1, OUTPUT); 
pinMode(Pin3, OUTPUT);
pinMode(Pin5, OUTPUT);
pinMode(Pin6, OUTPUT); 
Serial.begin(9600);


}


void loop(){
  int Pr2 = analogRead(aPin1);
  int PR = analogRead(aPin0);

  if(PR > Pr2 )
  {
    analogWrite(Pin3, random(0,255));
    analogWrite(Pin5, random(0,255));
    analogWrite(Pin6, random(0,255));    
    }
    delay(10);
    analogWrite(Pin3, 0);
    analogWrite(Pin5, 0);
    analogWrite(Pin6, 0);
  
  }
