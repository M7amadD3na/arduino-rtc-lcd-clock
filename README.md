# RTC Clock with I2C LCD

Displays the current date and time from a DS3231 real-time clock on an I2C LCD.

## Technologies

DS3231 RTC, I2C, 16x2 LCD

## Requirements

`RTClib` and `LiquidCrystal_I2C` libraries; `Wire` library.

## Hardware and setup notes

The sketch uses a DS3231 RTC and a 16×2 I2C LCD at address `0x27`. Set the RTC once if it has not been initialized.

## Run

1. Install the Arduino IDE and the required board support and libraries.
2. Open `RTC_LCD_Clock.ino` from this folder.
3. Review pin assignments, the target board, and any network settings.
4. Replace placeholders (such as `YOUR_THINGSPEAK_WRITE_API_KEY`) with **your own settings locally**. Never commit real passwords or API keys.
5. Compile and upload to compatible hardware; monitor serial output where relevant.

> Note: This portfolio package is a cleaned copy of an existing project sketch, not a claim that it was retested on hardware or security-hardened.
