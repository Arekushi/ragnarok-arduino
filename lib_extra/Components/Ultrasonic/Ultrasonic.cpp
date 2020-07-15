#include <Ultrasonic.h>
#include <Arduino.h>

Ultrasonic::Ultrasonic(byte trigPin, byte echoPin) {
    this->trigPin = trigPin;
    this->echoPin = echoPin;

    setup();
}

void Ultrasonic::setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void Ultrasonic::show() {
    //Serial.print(F("Distance: "));
    //Serial.print(read());
    //Serial.println(F(" cm."));
}

unsigned int Ultrasonic::read() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    return duration * 0.034 / 2;
}
