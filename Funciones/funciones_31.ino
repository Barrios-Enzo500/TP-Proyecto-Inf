#include <LiquidCrystal.h>

#define rs 12
#define en 11
#define d4 5
#define d5 4
#define d6 3
#define d7 2

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int puntaje;

void bienvenida() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Bienvenido!");
  lcd.setCursor(0, 1);
  lcd.print("Al juego");
}

void inicioJuego() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Iniciando...");
  lcd.setCursor(0, 1);
  lcd.print("Buena suerte");
}

void finJuego() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Fin del juego");
}

void mostrarPuntaje() {
  puntaje = random(10, 101);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Tu puntaje es:");
  lcd.setCursor(0, 1);
  lcd.print(puntaje);
}

void setup() {
  lcd.begin(16, 2);

  randomSeed(analogRead(A0));

  bienvenida();
  delay(2000);

  inicioJuego();
  delay(2000);

  mostrarPuntaje();
  delay(2000);

  finJuego();
}

void loop() {
}