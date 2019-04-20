int s1 = A0, s2 = A1, s3 = A2, s4 = A3, s5 = A4, s6 = A5, s7 = A6, s8 = A7;
void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print("s1: ");
  Serial.print(analogRead(s1));
  Serial.print(" s2: ");
  Serial.print(analogRead(s2));
  Serial.print(" s3 ");
  Serial.print(analogRead(s3));
  Serial.print(" s4: ");
  Serial.print(analogRead(s4));
  Serial.print(" s5: ");
  Serial.print(analogRead(s5));
  Serial.print(" s6: ");
  Serial.print(analogRead(s6));
  Serial.print(" s7: ");
  Serial.print(analogRead(s7));
  Serial.print(" s8: ");
  Serial.println(analogRead(s8));
  delay(70);

}
