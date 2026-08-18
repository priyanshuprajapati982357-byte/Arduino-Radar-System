#include <Servo.h>

Servo radar;

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;

long duration;
int distance;

void setup() {
  Serial.begin(9600);

  radar.attach(servoPin);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  return distance;
}

void loop() {

  // Scan 0° to 180°
  for (int angle = 0; angle <= 180; angle++) {

    radar.write(angle);
    delay(15);

    distance = getDistance();

    Serial.print(angle);
    Serial.print(",");
    Serial.println(distance);
  }

  // Scan 180° to 0°
  for (int angle = 180; angle >= 0; angle--) {

    radar.write(angle);
    delay(15);

    distance = getDistance();

    Serial.print(angle);
    Serial.print(",");
    Serial.println(distance);
  }
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
