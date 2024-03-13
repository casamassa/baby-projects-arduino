void setup() {
  noTone(9);
}

void loop() {
  if (!digitalRead(2)) {
    tone(9, 140);
  } else if (!digitalRead(3)) {
      tone(9, 296);
  } else if (!digitalRead(4)) {
      tone(9, 628);
  } else if (!digitalRead(5)) {
      tone(9, 1331);
  } else {
    noTone(9);
  }
}
