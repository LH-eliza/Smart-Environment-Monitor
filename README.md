## Smart Environment Monitor 

Basic environmental monitoring system to test with sensor interfacing, real-time processing, and digital communication, 

### Main Components 
- Arduino Uno 
- DHT11/DHT22 temperature and humidity sensor
- 16x2 LCD display
- RGB LED
- Breadboard and jumper wires
- 220Ω resistors (3x for RGB LED)
- 10kΩ potentiometer (for LCD contrast)


### DHT22 Temperature & Humidity Sensor
| DHT22 Pin | Arduino Pin |
|-----------|-------------|
| VCC       | 5V         |
| DATA      | D2         |
| GND       | GND        |

### LCD Display
| LCD Pin | Arduino Pin |
|---------|-------------|
| RS      | D12        |
| E       | D11        |
| D4      | D5         |
| D5      | D4         |
| D6      | D3         |
| D7      | D2         |
| VCC     | 5V         |
| GND     | GND        |

### RGB LED
| LED Pin | Arduino Pin        |
|---------|-------------------|
| R       | D9 (via 220Ω)     |
| G       | D10 (via 220Ω)    |
| B       | D11 (via 220Ω)    |
| GND     | GND               |
