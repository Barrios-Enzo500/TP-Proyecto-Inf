#define rojo 4
#define verde 5

int luzRojo[] = {1, 0, 0, 1, 1, 0, 1, 1};
int luzVerde[] = {0, 1, 0, 1, 0, 0, 1, 0};

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(rojo, luzRojo[i]);
    digitalWrite(verde, luzVerde[i]);

    delay(1000);
  }
}