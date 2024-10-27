#include <WiFi.h>

const char* ssid = "Your_SSID";         // Thay bằng SSID của bạn.
const char* password = "Your_PASSWORD"; // Thay bằng mật khẩu Wi-Fi của bạn.

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  Serial.print("Đang kết nối với Wi-Fi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nĐã kết nối với Wi-Fi!");
  Serial.print("Địa chỉ IP: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Code xử lý khi đã kết nối Wi-Fi
}
