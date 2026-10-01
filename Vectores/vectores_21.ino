int numeros[] = {10, 4, 2};
int aux;

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      if (numeros[j] > numeros[j + 1]) {
        aux = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = aux;
      }
    }
  }

  Serial.println("Vector ordenado:");

  for (int i = 0; i < 3; i++) {
    Serial.println(numeros[i]);
  }
}

void loop() {
}