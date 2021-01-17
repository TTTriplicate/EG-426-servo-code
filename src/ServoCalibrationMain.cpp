// Continuously sweep the servo through it's full range
 #include <mbed.h>
 #include "Servo.h"
 
 Servo myservo(D3);
 
 int main() {
     for(int k=0; k<4; k++){
         for(int i=0; i<100; i++) {
             myservo = i/100.0;
             ThisThread::sleep_for(100);
         }
         for(int i=100; i>0; i--) {
             myservo = i/100.0;
             ThisThread::sleep_for(100);
         }
    }
     for(int i=0; i<100; i++) {
             myservo = i/100.0;
             ThisThread::sleep_for(100);
         }
 }