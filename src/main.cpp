#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Inicializar o LCD com o Endereço I2C 0x27 e 16 colunas and 2 linhas

int sdaPin = 19; // Pino SDA do ESP32
int sclPin = 20; // Pino SCL do ESP32

void setup() {
  Wire.begin(sdaPin, sclPin); // Inicializar a comunicação I2C com os pinos SDA e SCL definidos
  lcd.init(); // Inicializar o LCD
  lcd.backlight(); // Ativar a luz de fundo do LCD
  lcd.setCursor(1, 0); // Definir o cursor para a primeira coluna e primeira linha
  lcd.print("Cunpanhêruuummmm");
  lcd.setCursor(4,1); // Definir o cursor para a quarta coluna e segunda linha
  lcd.print("Fazueli"); // Imprimir "Hello, World!" no LCD
}

void loop() {
  
}

