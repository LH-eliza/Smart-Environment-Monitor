## Smart Environment Monitor 

Basic environmental mointoring system to test with sensor interfacing, real-time processing, and digital communication, 

### Main Components 
- Arduino Uno 
- DHT11/DHT22 temperature and humidity sensor
- 16x2 LCD display
- RGB LED
- Breadboard and jumper wires
- 220Ω resistors (3x for RGB LED)
- 10kΩ potentiometer (for LCD contrast)


[DHT22] -------- [Arduino Uno]
 VCC    -------- 5V
 DATA   -------- D2
 GND    -------- GND

[LCD]   -------- [Arduino Uno]
 RS     -------- D12
 E      -------- D11
 D4     -------- D5
 D5     -------- D4
 D6     -------- D3
 D7     -------- D2
 VCC    -------- 5V
 GND    -------- GND

[RGB LED] ------- [Arduino Uno]
 R      -------- D9  (via 220Ω resistor)
 G      -------- D10 (via 220Ω resistor)
 B      -------- D11 (via 220Ω resistor)
 GND    -------- GND
