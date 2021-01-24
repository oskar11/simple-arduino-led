int ledstrip = 2;
 
void setup() {                
  pinMode(ledstrip, OUTPUT);     
}
 
void loop() {
 //makes red led on strip blink
  digitalWrite(ledstrip, HIGH);   
  delay(1000);               
  digitalWrite(ledstrip, LOW);    
  delay(1000);               
}
