#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // Bật LED
  delay(1000);                  // Chờ 1 giây
  digitalWrite(LED_PIN, LOW);   // Tắt LED
  delay(1000);                  // Chờ 1 giây
}
