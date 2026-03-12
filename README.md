# Teste de Display I2C com ESP32
Projeto desenvolvido para testar a comunicação entre um **ESP32** e um **display LCD 16x2 com módulo I2C**, utilizando o ambiente **PlatformIO**. O objetivo é validar o endereço I2C, conferir o funcionamento do display e garantir que a biblioteca está operando corretamente.

## Tecnologias Utilizadas
- ESP32
- Display LCD com módulo I2C
- PlatformIO (VS Code)
- C++
- Biblioteca `LiquidCrystal_I2C`

## Ligações (Wiring)
| ESP32 | Display I2C |
|-------|-------------|
| 3V3   | VCC         |
| GND   | GND         |
| GPIO 21 | SDA       |
| GPIO 22 | SCL       |
> Caso o display não funcione, utilize um *I2C Scanner* para descobrir o endereço correto.

## Como Executar o Projeto
1. Abra o projeto no **VS Code** com o **PlatformIO** instalado.
2. Conecte o ESP32 ao computador via USB.
3. Compile e envie o firmware:
   ```bash
   pio run --target upload
