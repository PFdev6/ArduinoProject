int dPin1 = 11, dPin2 = 10, dPin3 = 9, dPin4 = 6, dPin5 = 5, dPin6 = 3, aPin = 0; 
void setup() {
  // put your setup code here, to run once:
  pinMode(dPin1, OUTPUT);
  pinMode(dPin2, OUTPUT);
  pinMode(dPin3, OUTPUT);
  pinMode(dPin4, OUTPUT);
  pinMode(dPin5, OUTPUT);
  pinMode(dPin6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = analogRead(aPin);
  float tem = reading;
  Serial.println(tem);
                                                    // tem ot 0C do 50C 
  
  if(reading < 260 || reading > 215){   // 0C - 8.3C 
    digitalWrite(dPin1, HIGH);
    digitalWrite(dPin2, LOW);
    digitalWrite(dPin3, LOW);
    digitalWrite(dPin4, LOW);
    digitalWrite(dPin5, LOW);
    digitalWrite(dPin6, LOW);
  }else if(reading < 305 || reading > 260){     //  - 16,65C 
    digitalWrite(dPin1, HIGH);
    digitalWrite(dPin2, HIGH);
    digitalWrite(dPin3, LOW);
    digitalWrite(dPin4, LOW);
    digitalWrite(dPin5, LOW);
    digitalWrite(dPin6, LOW);
  }else if(reading < 350 || reading > 305){     //  - 25C 
    digitalWrite(dPin1, HIGH);
    digitalWrite(dPin2, HIGH);
    digitalWrite(dPin3, HIGH);
    digitalWrite(dPin4, LOW);
    digitalWrite(dPin5, LOW);
    digitalWrite(dPin6, LOW);
  }else if(reading < 395 || reading > 350){     //  - 33,36C
    digitalWrite(dPin1, HIGH);
    digitalWrite(dPin2, HIGH);
    digitalWrite(dPin3, HIGH);
    digitalWrite(dPin4, HIGH);
    digitalWrite(dPin5, LOW);
    digitalWrite(dPin6, LOW); 
  }else if(reading < 440 || reading > 395){     //  - 41,72C 
    digitalWrite(dPin1, HIGH);
    digitalWrite(dPin2, HIGH);
    digitalWrite(dPin3, HIGH);
    digitalWrite(dPin4, HIGH);
    digitalWrite(dPin5, HIGH);
    digitalWrite(dPin6, LOW);
  }else if(reading < 485 || reading > 440){     //  - 50C 
    digitalWrite(dPin1, HIGH);
    digitalWrite(dPin2, HIGH);
    digitalWrite(dPin3, HIGH);
    digitalWrite(dPin4, HIGH);
    digitalWrite(dPin5, HIGH);
    analogWrite(dPin6, 200);
  }  else{                                      // vyhod za interval 
    digitalWrite(dPin1, HIGH);
    digitalWrite(dPin2, HIGH);
    digitalWrite(dPin3, HIGH);
    digitalWrite(dPin4, HIGH);
    digitalWrite(dPin5, HIGH);
    digitalWrite(dPin6, HIGH);
  }
   delay(100);
}
