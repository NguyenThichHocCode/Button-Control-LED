int led = 10;
int button = 3;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);



}

void loop() {
  int buttonStatus = digitalRead(button); // Đọc tráng thái của nút nhấn
  if (buttonStatus == 1) // Nếu button bị ấn sẽ trả giá trị bằng 1
  {
    digitalWrite(led, HIGH); 
    delay(5000);
    digitalWrite(led, LOW);
  }
}
