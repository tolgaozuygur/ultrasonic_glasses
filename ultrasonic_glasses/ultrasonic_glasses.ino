/*
 Ultrasonic Glasses Project for Visually Impaired
 by Tolga Ozuygur and Cem Sina Cetin
*/

const int anPin = 0;
long mm;
int buzzerPin = 3;
long buzzerBeepDuration = 40;
long buzzerBeepMillis = 0;
long buzzerFrequencyDuration = 0;
long buzzerPreviousBeepMillis = 0;
float mmToBuzzerFrequencyMultiplier = 0.6;

void setup(){
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  calibrationWarning(3000, 500, 100);
}

void loop(){
  mm = analogRead(anPin) * 5;
  buzzerFrequencyDuration = mm * mmToBuzzerFrequencyMultiplier;
  if(buzzerPreviousBeepMillis + buzzerFrequencyDuration < millis()){
    buzzerPreviousBeepMillis =  millis();
    buzzerBeepMillis = millis() + buzzerBeepDuration;
    digitalWrite(buzzerPin, HIGH);
  }
  if(buzzerBeepMillis < millis()){
    digitalWrite(buzzerPin, LOW);
  }
  Serial.println(buzzerFrequencyDuration);
  delay(5);
}

void calibrationWarning(int totalDur, int beepDur, int silenceDur){
  int oneBeep = beepDur + silenceDur;
  for(int i = 0; i < totalDur; i+=oneBeep) {
    digitalWrite(buzzerPin, HIGH);
    delay(beepDur);
    digitalWrite(buzzerPin, LOW);
    delay(silenceDur);
  }
}
