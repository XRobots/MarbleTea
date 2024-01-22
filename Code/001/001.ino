#include <Servo.h>
Servo myservo;

int sens;
int flag = 0;

void setup() {

  myservo.attach(6);
  myservo.write(15);  
  pinMode(7, INPUT);
  Serial.begin(115200);

}

void loop() {

  sens = digitalRead(7);
  Serial.println(sens);

  if (sens == 0 && flag == 0) {
    flag = 1; 
  }

  else if (flag == 1) {
    delay(15000);
    myservo.write(110);
  }

  delay(10);
  


}
