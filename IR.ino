#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define IR_PIN 13            // Chọn chân GPIO cho cảm biến IR
#define LCD_ADDRESS 0x27    // Địa chỉ I2C của LCD, thường là 0x27 hoặc 0x3F

LiquidCrystal_I2C lcd(LCD_ADDRESS, 16, 2); // Khởi tạo LCD với địa chỉ I2C, kích thước 16x2

void setup() {
  pinMode(IR_PIN, INPUT);  // Thiết lập chân IR là đầu vào
  lcd.begin();             // Khởi tạo LCD
  lcd.backlight();         // Bật đèn nền LCD
  lcd.print("Waiting...");
  delay(2000);
  lcd.clear();
}

void loop() {
  int irState = digitalRead(IR_PIN);  // Đọc tín hiệu từ cảm biến IR

  if (irState == HIGH) { // Nếu cảm biến IR phát hiện có chuyển động
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Detecting Object");
  } else { // Nếu không có chuyển động, xóa hiển thị
    lcd.clear();
  }

  delay(500); // Độ trễ để giảm số lần làm mới màn hình LCD
}
