
#include <Servo.h>

Servo comporta1;
Servo comporta2;
Servo comporta3;
Servo comporta4;

void setup() {
  // put your setup code here, to run once:

comporta1.attach(2);
comporta2.attach(3);
comporta3.attach(4);
comporta4.attach(5);

comporta1.write(0);
comporta2.write(0);
comporta3.write(0);
comporta4.write(0);
delay(1000);


}

void loop() {
  // put your main code here, to run repeatedly:

comporta1.write(0);
delay(500);
comporta1.write(180);
delay(500);
comporta1.write(0);
delay(500);
comporta1.write(180);
delay(500);
comporta1.write(0);
delay(500);
comporta1.write(180);
delay(500);
comporta1.write(0);
delay(500);
comporta1.write(180);
delay(500);
comporta1.write(0);
delay(500);

comporta2.write(0);
delay(500);
comporta2.write(180);
delay(500);
comporta2.write(0);
delay(500);
comporta2.write(180);
delay(500);
comporta2.write(0);
delay(500);
comporta2.write(180);
delay(500);
comporta2.write(0);
delay(500);
comporta2.write(180);
delay(500);
comporta2.write(0);
delay(500);

comporta3.write(0);
delay(500);
comporta3.write(180);
delay(500);
comporta3.write(0);
delay(500);
comporta3.write(180);
delay(500);
comporta3.write(0);
delay(500);
comporta3.write(180);
delay(500);
comporta3.write(0);
delay(500);
comporta3.write(180);
delay(500);
comporta3.write(0);
delay(500);

comporta4.write(0);
delay(500);
comporta4.write(180);
delay(500);
comporta4.write(0);
delay(500);
comporta4.write(180);
delay(500);
comporta4.write(0);
delay(500);
comporta4.write(180);
delay(500);
comporta4.write(0);
delay(500);
comporta4.write(180);
delay(500);
comporta4.write(0);
delay(500);



delay(14400000);




}
