#include <Servo.h>  // Include Servo library

Servo servos[5];  // Create an array for five servos
int servoPins[] = {9, 8, 7, 6, 5};  // Servo signal pins
int currentAngle = 90; // Start all servos at 90°

void setup() {
  Serial.begin(9600); // Start serial communication

  // Attach servos to pins and initialize to 90°
  for (int i = 0; i < 5; i++) {
    servos[i].attach(servoPins[i]);
    servos[i].write(90);
  }

  Serial.println("Enter a single angle (0-180) for all servos:");
}

void smoothMove(int targetAngle) {
  int stepDelay = 20; // Delay in milliseconds between steps (adjust for speed)
  int stepSize = 1;   // Increment per step
  bool moving = true;

  while (moving) {
    moving = false;

    if (currentAngle < targetAngle) {
      currentAngle += stepSize;
      moving = true;
    } else if (currentAngle > targetAngle) {
      currentAngle -= stepSize;
      moving = true;
    }

    // Apply mirrored movements
    servos[0].write(currentAngle);  // Servo 1 (Normal)
    servos[1].write(map(currentAngle, 0, 180, 180, 0)); // Servo 2 (Mirrored)
    servos[2].write(currentAngle);  // Servo 3 (Normal)
    servos[3].write(map(currentAngle, 0, 180, 180, 0)); // Servo 4 (Mirrored)
    servos[4].write(currentAngle);  // Servo 5 (Normal)

    delay(stepDelay);
  }
}

void loop() {
  if (Serial.available()) {
    int targetAngle = Serial.parseInt(); // Read input as integer

    if (targetAngle >= 0 && targetAngle <= 180) {
      Serial.print("Moving all servos to: ");
      Serial.println(targetAngle);

      smoothMove(targetAngle); // Move all servos smoothly

    } else {
      Serial.println("Invalid angle! Enter a value between 0 and 180.");
    }

    while (Serial.available() > 0) Serial.read(); // Clear input buffer
  }
}
