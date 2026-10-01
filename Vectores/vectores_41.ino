#define rojo 4

int luces[] = {1, 0, 0, 1, 1, 0, 1, 1};

void setup() {
  pinMode(rojo, OUTPUT);
}

void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(rojo, luces[i]);
    delay(1000);
  }
}