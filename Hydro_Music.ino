int analogPin = 0; 
int buzz = 12; 
int fre = 0;
int data = 0;
int val;
int buttonPin = 5;
int buttonState;

void setup (){
pinMode(buttonPin, INPUT);
pinMode(buzz, OUTPUT); 
Serial.begin(9600); 
buttonState = digitalRead(buttonPin);
}

void loop (){
val = digitalRead(buttonPin);
Serial.println(val);
delay(10);
if (val != buttonState)  // check if button was pressed
  {
  data = analogRead(analogPin);
  fre = map(data, 300, 750, 200, 750);
  tone(buzz,fre,100);
  //Serial.println(data);
  }else{
    
  }

}