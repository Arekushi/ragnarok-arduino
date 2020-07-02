#include <Arduino.h>

/* Cart */
#include <Ultrasonic.h>
#include <Cart.h>

/* States Machine */
#include <StateMachine.h>
#include <State.h>
#include <Front.h>

Cart cart;
State* state = new Front();

StateMachine machine(cart, state);

void setup() {
    Serial.begin(9600);
}

void loop() {
    machine.ExecuteState();
    delay(5000);
}
