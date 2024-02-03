Разводка платы stm32f405vgt6(PyBoard V1.1) [PDF](./PYBv11-schematics.pdf).

Заметки по схеме  

Распиновку смотреть пока что только [тут](../Firmware/target/STM32F405PY1v1) в target.h и target.c

UART:  
RX1 - PB7, TX1 - PB6  
RX3 - PB11, TX3 - PB10  
RX6 - PC7, TX6 - PC6  

Моторы/сервы: PA0,PA1,PA2,PA3, PB0,PB1,PB14,PB15

Бипер: PA14  
PINIO: PC0, PC1

i2c: SCL - PB8, SDA - PB9

Акселерометры BMI160, MPU6500, MPU9250:  
SCK - PA5, MISO - PA6, MOSI - PA7, CS - PA4  
Акселерометр MPU6050:  
i2c

![pinout_bmi160](./bmi160.png)  
![pinout](./pinout.jpg)  
