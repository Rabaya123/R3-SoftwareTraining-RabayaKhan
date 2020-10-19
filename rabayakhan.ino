  int rightmotfor = 3;
  int rightmotback = 5;
  int leftmotfor = 10;
  int leftmotback = 11;

  int sw1 = 2;
  int sw2 = 4;
  int sw3 = 6;
  int sw4 = 7;

  double pot;

void setup()
{
  pinMode(A0, INPUT);
  
  pinMode(rightmotfor, OUTPUT);
  pinMode(rightmotback, OUTPUT);
  pinMode(leftmotfor, OUTPUT);
  pinMode(leftmotback, OUTPUT);
  
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  pinMode(sw3, INPUT_PULLUP);
  pinMode(sw4, INPUT_PULLUP);
  
  Serial.begin(9600);
 
}

void loop()
{
  pot = analogRead(A0);
  pot = (pot/4);
  Serial.println(digitalRead(2));
  
  if (digitalRead(2) == 0){
    analogWrite(rightmotfor, pot);
    analogWrite(leftmotfor,pot);
  }
  else if  (digitalRead(4) == 0){
    analogWrite(rightmotback, pot);
    analogWrite(leftmotback,pot);
  }
  else if  (digitalRead(6) == 0){
    analogWrite(rightmotfor, pot);
    analogWrite(leftmotback,pot);
  }
  else if  (digitalRead(7) == 0){
    analogWrite(rightmotback, pot);
    analogWrite(leftmotfor,pot);
  }
  else{
    analogWrite(rightmotfor, 0);
    analogWrite(leftmotfor,0);
    analogWrite(rightmotback, 0);
    analogWrite(leftmotback, 0);
  }
  
}
