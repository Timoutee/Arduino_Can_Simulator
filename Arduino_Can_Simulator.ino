long dlc;
long data;
int ID[] = {223, 416, 546, 785, 955, 1182, 1485, 2025, 2445};
int numID = sizeof(ID) / sizeof(ID[0]);

void setup() {
  Serial.begin(115200);
    randomSeed(analogRead(0));
  
}

void loop() {
  int randomIndex = random(numID); 
  int randomID = ID[randomIndex];
  
  Serial.print(randomID); 

  dlc = random(9);
  
  //Serial.print(ID);
  Serial.print(" ");
  Serial.print(dlc);
  Serial.print(" ");

  for (int i = 0; i < dlc; i++) {
    int data = random(256);  
    Serial.print(data);
    Serial.print(" ");
  }

   Serial.println();
  delay(1000);
}