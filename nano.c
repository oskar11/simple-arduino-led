const pinnum = 2;
 
void setup() {                
  pinMode(pinnum, OUTPUT);     
}
 
void loop() {
  digitalWrite(led, HIGH);   
  delay(1000);               
  digitalWrite(led, LOW);    
  delay(1000);               
}