#define buzzer 8

void setup() {
  pinMode(buzzer, OUTPUT);

  melodia1();
  delay(1000);

  melodia2();
  delay(1000);

  melodia3();
}

void loop() {
}

void melodia1() {
  tone(buzzer, 262);
  delay(300);
  tone(buzzer, 330);
  delay(300);
  tone(buzzer, 392);
  delay(300);
  noTone(buzzer);
}

void melodia2() {
  tone(buzzer, 392);
  delay(300);
  tone(buzzer, 330);
  delay(300);
  tone(buzzer, 262);
  delay(300);
  noTone(buzzer);
}

void melodia3() {
  tone(buzzer, 262);
  delay(200);
  tone(buzzer, 392);
  delay(200);
  tone(buzzer, 523);
  delay(400);
  noTone(buzzer);
}