#define PIR_PIN 4
#define LED_PIN 2

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if(motion == HIGH) {
    Serial.println("Motion Detected!");
    digitalWrite(LED_PIN, HIGH);
  }else{
    digitalWrite(LED_PIN, LOW);
  }
}
