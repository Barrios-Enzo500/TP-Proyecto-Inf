int numeros[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

int suma = 0;
float media;

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 10; i++) {
    suma = suma + numeros[i];
  }

  media = (float)suma / 10;

  Serial.print("La media es: ");
  Serial.println(media);
}

void loop() {
}