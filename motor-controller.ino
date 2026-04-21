// ============================================
// Bidirectional DC Motor Speed & Direction Controller
// Author: Fadila Bendjouadi
// Hardware: Arduino + L293D Motor Driver + Joystick
// ============================================

// Pin Definitions
int motorPin1 = 4;        // Arduino Pin 4 → L293D Input A+
int motorPin2 = 5;        // Arduino Pin 5 → L293D Input A-
int joystickPin = A0;     // Arduino Pin A0 → Joystick X-axis
int joystickValue = 215;  // Joystick default value
int PWM;                  // PWM variable for speed control
int motorPWM_Pin = 10;    // Arduino Pin 10 → L293D Enable (EN1)

void setup() {
  Serial.begin(9600);
  pinMode(motorPWM_Pin, OUTPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  joystickValue = analogRead(joystickPin);

  // Forward direction
  if (joystickValue > 498) {
    PWM = map(joystickValue, 498, 1023, 0, 255);
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    Serial.print("PWM Value: ");
    Serial.println(PWM);
  }

  // Reverse direction
  else if (joystickValue < 494) {
    PWM = map(joystickValue, 494, 0, 0, 255);
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    analogWrite(motorPWM_Pin, PWM);
    Serial.println("Motor: Reverse");
    Serial.print("PWM Value: ");
    analogWrite(motorPWM_Pin, PWM);
    Serial.println("Motor: Forward");
    Serial.println(PWM);
  }

  // Motor stop (joystick centered)
  else {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    analogWrite(motorPWM_Pin, 0);
    Serial.println("Motor: Stopped");
  }

  delay(200);
}
