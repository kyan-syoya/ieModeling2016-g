#define BEAT 300
void setup() {
  // put your setup code here, to run once:
   pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  tone(12,349,BEAT);
  delay(BEAT/2);
  tone(12,294,BEAT);
  delay(BEAT/2);
   tone(12,440,BEAT);
  delay(BEAT/2);
  tone(12,294,BEAT);
  delay(BEAT/2);
tone(12,330,BEAT);
  delay(BEAT/2);
tone(12,440,BEAT);
  delay(BEAT/2);
tone(12,330,BEAT);
  delay(BEAT/2);
tone(12,349,BEAT);
  delay(BEAT/2);
 tone(12,330,BEAT);
  delay(BEAT/2);
tone(12,440,BEAT);
  delay(BEAT/2);
tone(12,294,BEAT);
  delay(BEAT/2);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(3000);
  
}
