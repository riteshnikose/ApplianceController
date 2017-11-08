int ledPin=13;
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(ledPin,OUTPUT);

}

char data;
void loop()
{
  
  data = Serial.read();
  Serial.print(data);
    if ( data == '1'){
                      digitalWrite(ledPin, HIGH);
                  }
    if ( data == '0'){
                      digitalWrite(ledPin, LOW);
                  }
                  delay(60);
}
  



