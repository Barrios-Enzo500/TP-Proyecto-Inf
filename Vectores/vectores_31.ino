float numeros[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};

float mayor;

void setup() {
  Serial.begin(9600);

  mayor = numeros[0];

  for (int i = 0; i < 10; i++) {
    if (numeros[i] > mayor) {
      mayor = numeros[i];
    }
  }

  Serial.print("El numero mas grande es: ");
  Serial.println(mayor);
}

void loop() {
}