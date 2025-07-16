#include <Servo.h>

Servo servo1; // Create servo object to control the first servo
Servo servo2; // Create servo object to control the second servo
Servo servo3; // Create servo object to control the first servo
Servo servo4; // Create servo object to control the second servo
Servo servo5; // Create servo object to control the first servo
Servo servo6; // Create servo object to control the second servo

void yoga1() {
   // Move both servos to 90 degrees
  servo3.write(90);
  servo6.write(90);
  delay(1000); // Wait for 1 second

  // Move both servos to 180 degrees
  servo3.write(0);
  servo6.write(180);
  delay(1000); // Wait for 1 second

  // Move both servos back to 90 degrees
  servo3.write(90);
  servo6.write(90);
  delay(1000); // Wait for 1 second

  // Move both servos back to 0 degrees
  servo3.write(180);
  servo6.write(0);
  delay(1000); // Wait for 1 second
  
}

void hand(){
  servo2.write(90);
  servo5.write(90);
  delay(1000); // Wait for 1 second

  // Move both servos to 180 degrees
  servo2.write(180);
  servo5.write(0);
  delay(1000); // Wait for 1 second

  // Move both servos back to 90 degrees
  servo2.write(90);
  servo5.write(90);
  delay(1000); // Wait for 1 second

  // Move both servos back to 0 degrees
  servo2.write(0);
  servo5.write(180);
  delay(1000); // Wait for 1 second
}

void handshack(){

servo4.write(140);
 delay(1000);
servo4.write(120);
 delay(1000);
servo4.write(140);
 delay(1000);
servo4.write(120);
 delay(1000);
servo4.write(140);
 delay(1000);
 servo4.write(180);

}

void setup() {
   servo1.attach(8); // Attaches the second servo on pin 10 to the servo object
  servo2.attach(9); // Attaches the first servo on pin 9 to the servo object
  servo3.attach(10); // Attaches the second servo on pin 10 to the servo object
  servo4.attach(11); // Attaches the first servo on pin 9 to the servo object
  servo5.attach(12); // Attaches the second servo on pin 10 to the servo object
  servo6.attach(13); // Attaches the first servo on pin 9 to the servo object
 


  // Initialize both servos to 0 degrees
  servo3.write(180);
  servo6.write(0);
   servo2.write(0);
  servo5.write(180);
  servo1.write(0);
  servo4.write(180);
  delay(1000); // Wait for 1 second to allow the servos to move to 0 degrees

 yoga1();
 hand();
  handshack();
}

void loop() {
 
}


http://arduino.esp8266.com/stable/package_esp8266com_index.json
https://dl.espressif.com/dl/package_esp32_index.json

#include <Servo.h>

Servo servo1;
void setup() {
   servo1.attach(8);
   servo1.write(180);
}

void loop() {
 
}


