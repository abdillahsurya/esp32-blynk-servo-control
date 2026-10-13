# Kontrol Servo Jarak Jauh dengan ESP32 dan Blynk

Servo digerakkan dari aplikasi Blynk di HP melalui koneksi Wi-Fi (IoT).

## Komponen
- ESP32
- Servo motor (misalnya SG90)
- Kabel jumper
- Aplikasi Blynk (Android/iOS)

## Koneksi pin
| Servo | ESP32 |
|---|---|
| Sinyal (oranye/kuning) | GPIO 23 |
| VCC (merah) | 5V / VIN |
| GND (cokelat/hitam) | GND |

## Library
- Blynk
- ESP32Servo

## Pengaturan Blynk
- Buat template dan device di Blynk Console.
- Datastream V1: Switch (0/1).
- Datastream V10: Button (0/1).

## Cara pakai
1. Buka file `.ino` di Arduino IDE.
2. Isi `BLYNK_TEMPLATE_ID`, `BLYNK_TEMPLATE_NAME`, `BLYNK_AUTH_TOKEN`, `ssid`, dan `pass`.
3. Upload ke ESP32.
4. Buka aplikasi Blynk dan gunakan switch/button untuk menggerakkan servo.

## Cara kerja
- Nilai 0: servo bergerak ke 0 derajat.
- Nilai 1: servo bergerak ke 180 derajat.

## Foto / video demo
(tambahkan foto rangkaian atau tautan video)
