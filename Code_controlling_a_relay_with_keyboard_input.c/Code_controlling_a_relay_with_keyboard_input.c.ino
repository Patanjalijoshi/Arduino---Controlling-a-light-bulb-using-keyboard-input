//controlling a light bulb with keyboard input
char inByte = 'n'; // initialize the variable inByte
# define relay 2 // pin that the LED is attached to

void setup() {
pinMode(relay, OUTPUT);
Serial.begin(57600);
}

void loop() {
  if(Serial.available()){
    inByte = Serial.read();
    if(inByte == 'y'){
      digitalWrite(relay,HIGH;
      }
    if(inByte == 'n'){
      digitalWrite(relay,LOW);
      } 
    }
}
