long dlc;
long data;
int ID[] = {223, 416, 546, 785, 955, 1182, 1485, 2025, 2445};
int numID = sizeof(ID) / sizeof(ID[0]);
int maxRandomValue = 255; // Valeur maximale par défaut pour les nombres aléatoires

void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(0));
}

void loop() {
  if (Serial.available()) {
    int input = Serial.parseInt(); // Lire l'entrée série en tant qu'entier

    if (input > 0) {
      maxRandomValue = input; // Mettre à jour la valeur maximale des nombres aléatoires
    }
  }

  int randomIndex = random(numID);
  int randomID = ID[randomIndex];

  Serial.print(randomID);
  Serial.print(" ");

  dlc = random(9);

  Serial.print(dlc);
  Serial.print(" ");

  for (int i = 0; i < dlc; i++) {
    int data = random(maxRandomValue + 1); // Générer un nombre aléatoire jusqu'à la valeur maximale spécifiée
    Serial.print(data);
    Serial.print(" ");
  }

  Serial.println();
  delay(250);
}
