#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

#define servoPin1 2
#define servoPin2 3
#define servoPin3 4
#define servoPin4 5
#define servoPin5 6


#define buttonPin1 7
#define buttonPin2 8
#define buttonPin3 9
#define buttonPin4 10
#define buttonPin5 11
#define buttonPin6 12

int angle =0;    // initial angle  for servo (beteen 1 and 179)
int angleStep =10;
const int minAngle = 0;
const int maxAngle = 180;

const int type =2;
int buttonPushed =0;

void setup() {

  Serial.begin(9600);
  
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
  servo5.attach(servoPin5);
  
  pinMode(buttonPin1,INPUT_PULLUP);
  pinMode(buttonPin2,INPUT_PULLUP);
  pinMode(buttonPin3,INPUT_PULLUP);
  pinMode(buttonPin4,INPUT_PULLUP);
  pinMode(buttonPin5,INPUT_PULLUP);
  
  pinMode(buttonPin6,INPUT_PULLUP);

  servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);
  servo5.write(angle);
}


void thumb() {

    if(digitalRead(buttonPin1) == LOW){
    buttonPushed = 1;
  }
   if( buttonPushed ){
  // change the angle for next time through the loop:
  angle = angle + angleStep;

    // reverse the direction of the moving at the ends of the angle:
    if (angle >= maxAngle) {
      angleStep = -angleStep;
        if(type ==1)
        {
            buttonPushed =0;                   
        }
    }
    
    if (angle <= minAngle) {
      angleStep = -angleStep;
       if(type==2)
        {
            buttonPushed =0;       
        }
    }
    
      servo1.write(angle); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle);   // print the angle
      Serial.println(" degree");    
      delay(100); // waits for the servo to get there
   }
}


void index_finger(){

    if(digitalRead(buttonPin2) == LOW){
    buttonPushed = 1;
  }
   if( buttonPushed ){
  // change the angle for next time through the loop:
  angle = angle + angleStep;

    // reverse the direction of the moving at the ends of the angle:
    if (angle >= maxAngle) {
      angleStep = -angleStep;
        if(type ==1)
        {
            buttonPushed =0;                   
        }
    }
    
    if (angle <= minAngle) {
      angleStep = -angleStep;
       if(type==2)
        {
            buttonPushed =0;       
        }
    }
    
    servo2.write(angle); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle);   // print the angle
      Serial.println(" degree");    
      delay(100); // waits for the servo to get there
   }
  
}


void middle_finger(){

    if(digitalRead(buttonPin3) == LOW){
    buttonPushed = 1;
  }
   if( buttonPushed ){
  // change the angle for next time through the loop:
  angle = angle + angleStep;

    // reverse the direction of the moving at the ends of the angle:
    if (angle >= maxAngle) {
      angleStep = -angleStep;
        if(type ==1)
        {
            buttonPushed =0;                   
        }
    }
    
    if (angle <= minAngle) {
      angleStep = -angleStep;
       if(type==2)
        {
            buttonPushed =0;       
        }
    }
    
    servo3.write(angle); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle);   // print the angle
      Serial.println(" degree");    
      delay(100); // waits for the servo to get there
   }
   
}

void ring_finger(){

    if(digitalRead(buttonPin4) == LOW){
    buttonPushed = 1;
  }
   if( buttonPushed ){
  // change the angle for next time through the loop:
  angle = angle + angleStep;

    // reverse the direction of the moving at the ends of the angle:
    if (angle >= maxAngle) {
      angleStep = -angleStep;
        if(type ==1)
        {
            buttonPushed =0;                   
        }
    }
    
    if (angle <= minAngle) {
      angleStep = -angleStep;
       if(type==2)
        {
            buttonPushed =0;       
        }
    }
    
    servo4.write(angle); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle);   // print the angle
      Serial.println(" degree");    
      delay(100); // waits for the servo to get there
   }
  
}

void little_finger(){

    if(digitalRead(buttonPin5) == LOW){
    buttonPushed = 1;
  }
   if( buttonPushed ){
  // change the angle for next time through the loop:
  angle = angle + angleStep;

    // reverse the direction of the moving at the ends of the angle:
    if (angle >= maxAngle) {
      angleStep = -angleStep;
        if(type ==1)
        {
            buttonPushed =0;                   
        }
    }
    
    if (angle <= minAngle) {
      angleStep = -angleStep;
       if(type==2)
        {
            buttonPushed =0;       
        }
    }
    
    servo5.write(angle); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle);   // print the angle
      Serial.println(" degree");    
      delay(100); // waits for the servo to get there
   }
}



void concurrently(){
  
}

void loop() {

  thumb();
  delay(100);
  index_finger();
  
  
  
}