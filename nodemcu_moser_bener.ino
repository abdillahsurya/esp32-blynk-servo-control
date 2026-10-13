#define BLYNK_TEMPLATE_ID "TMPL6awH5gs6A"
#define BLYNK_TEMPLATE_NAME "bismillah bisa"
#define BLYNK_AUTH_TOKEN "cLnE0BYQwcz8xJolT9BZ3xWUvLddiV-0"

#include <BlynkSimpleEsp32.h>
#include <ESP32Servo.h> 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "fh_23f318"; // Ganti dengan SSID Wi-Fi Anda
char pass[] = "wlandc0ce7"; // Ganti dengan Password Wi-Fi Anda

Servo myServo;
const int servoPin = 23; 

void setup() {
  Serial.begin(115200); // Menyesuaikan baud rate untuk ESP32
  Blynk.begin(auth, ssid, pass);
  myServo.attach(servoPin); // Menghubungkan servo ke pin yang sesuai
  Serial.println("Setup complete. Servo attached to pin 23.");
}
int switchValue = 0;   // Nilai dari Switch
int buttonValue = 0;   // Nilai dari Button
int servoPosition = 0; // Posisi servo (0° atau 180°)

BLYNK_WRITE(V1) { // Menggunakan Virtual Pin V1 di Blynk
  int switchValue = param.asInt(); // Membaca nilai dari Blynk switch (0 atau 1)
  if (switchValue == 0) {
    myServo.write(0); // Menggerakkan servo ke sudut 0 derajat
    Serial.println("Servo bergerak 0 derajat.");
  } else{
    myServo.write(180); // Menggerakkan servo ke sudut 180 derajat
    Serial.println("Servo bergerak 180 derajat.");
  }
}

BLYNK_WRITE(V10) { // Menggunakan Virtual Pin V2 di Blynk
  int buttonValue = param.asInt(); // Membaca nilai dari Blynk button (0 atau 1 , off atau on)
  if (buttonValue == 0) {
    myServo.write(0); // Menggerakkan servo ke sudut 0 derajat
    Serial.println("Servo bergerak 0 derajat.");
  } else{
    // Kembalikan ke posisi berdasarkan switch setelah button dilepas
    myServo.write(180); // Menggerakkan servo ke sudut 180 derajat
    Serial.println("Servo bergerak 180 derajat.");
  }
}

void loop() {
  Blynk.run();
}