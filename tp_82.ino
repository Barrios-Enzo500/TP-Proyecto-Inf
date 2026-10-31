
#define NOTE_C3 131
#define NOTE_D3 147
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 247

#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494

const int BUZZER_PIN = 8;
const int TEMPO = 100;
const int PAUSA_SEGUNDOS = 3;

const int notes[] = {
  NOTE_C3, NOTE_G3, NOTE_D4, NOTE_C4,
  NOTE_F3, NOTE_B3, NOTE_G3, NOTE_D4,
  NOTE_C3, NOTE_E3, NOTE_A3, NOTE_F3,
  NOTE_B3, NOTE_G3, NOTE_D4, NOTE_C3
};

const int figures[] = {
  8, 16, 8, 16,
  8, 16, 8, 16,
  8, 16, 8, 16,
  8, 16, 8, 4
};

const int LENGTH = sizeof(notes) / sizeof(notes[0]);

void playNote(int note, int duration);
void playMelody(const int notes[], const int figures[], int length);
void pauseBetweenLoops(int seconds);
int cuadritosToDuration(int cuadritos);

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  playMelody(notes, figures, LENGTH);
  pauseBetweenLoops(PAUSA_SEGUNDOS);
}

void playNote(int note, int duration) {
  if (note > 0) {
    tone(BUZZER_PIN, note);
    delay(duration);
    noTone(BUZZER_PIN);
  } else {
    noTone(BUZZER_PIN);
    delay(duration);
  }
}

void playMelody(const int notes[], const int figures[], int length) {
  for (int i = 0; i < length; i++) {
    int cuadritos = 64 / abs(figures[i]);
    int duration = cuadritosToDuration(cuadritos);

    playNote(notes[i], duration);
  }
}

int cuadritosToDuration(int cuadritos) {
  unsigned long duracionRedonda = 240000UL / TEMPO;
  return (duracionRedonda * cuadritos) / 32;
}

void pauseBetweenLoops(int seconds) {
  noTone(BUZZER_PIN);
  delay(seconds * 1000UL);
}
