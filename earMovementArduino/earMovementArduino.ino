//int leftDirectionPin = 12;  // pins for left ear
//int leftPwmPin = 3;
//int leftBrakePin = 9;

int leftGoingLPin = 11;
int leftGoingRPin = 8;

int rightGoingLPin = 6;
int rightGoingRPin = 3;

//int rightDirectionPin = 11;  // pins for right ear
//int rightPwmPin = 5;
//int rightBrakePin = 10;

void moveEarLeft(int directionPin, int pwmPin, int brakePin, int duration, int speed, int delay) {
  digitalWrite(directionPin, LOW); // Set direction for left ear
  analogWrite(pwmPin, speed); // Move left ear
  delay(duration); // How long it moves
  analogWrite(pwmPin, 0); // Stop for 3 seconds
  delay(delay);
}
void moveEarRight(int directionPin, int pwmPin, int brakePin, int duration, int speed, int delay) {
  digitalWrite(directionPin, HIGH); // Set direction for left ear
  analogWrite(pwmPin, speed); // Move left ear
  delay(duration); // How long it moves
  analogWrite(pwmPin, 0); // Stop for 3 seconds
  delay(delay);
}

void moveLeftEar(int directionPin, int duration, int delay) {
  digitalWrite(directionPin);
  delay(duration);

}

void setup() {
  delay(5000);

  pinMode(leftGoingLPin, OUTPUT);
  pinMode(leftGoingRPin, OUTPUT);

  pinMode(rightGoingLPin, OUTPUT);
  pinMode(rightGoingRPin, OUTPUT);

}

void loop() {

    // Left ear movement

    //move left for 1 second
  //digitalWrite(leftDirectionPin, LOW); // Set direction for left ear
  //analogWrite(leftPwmPin, 30); // Move left ear
  //delay(1000); //how long it moves
  //analogWrite(leftPwmPin, 0); //stop for 3 seconds
  //delay(3000);

  moveEarLeft(leftDirectionPin, leftPwmPin, leftBrakePin, 1000, 30, 3000);

  //digitalWrite(leftDirectionPin, LOW); //move left for 1 second again
  //analogWrite(leftPwmPin, 30);
  //delay(1000);
  //analogWrite(leftPwmPin, 0); //stop for 3 seconds
  //delay(3000);

  moveEarLeft(leftDirectionPin, leftPwmPin, leftBrakePin, 1000, 30, 3000);

  //digitalWrite(leftBrakePin, HIGH); // move ear right for 2 sec
  //analogWrite(leftPwmPin, 30); 
  //delay(2000);
  //analogWrite(leftPwmPin, 0); //stop for 3 seconds
  //delay(3000);

  moveEarRight(leftDirectionPin, leftPwmPin, leftBrakePin, 2000, 30, 3000);

  //basic movement 2
  moveEarLeft(leftDirectionPin, leftPwmPin, leftBrakePin, 2000, 50, 3000);
  moveEarLeft(leftDirectionPin, leftPwmPin, leftBrakePin, 1000, 30, 3000);
  moveEarRight(leftDirectionPin, leftPwmPin, leftBrakePin, 3000, 30, 5000);

  //quick ear shake
  moveEarLeft(leftDirectionPin, leftPwmPin, leftBrakePin, 500, 100, 0);
  moveEarRight(leftDirectionPin, leftPwmPin, leftBrakePin, 500, 100, 9000);

    // Right ear movement

  //nothing while left ear moves
  moveEarRight(rightDirectionPin, rightPwmPin, rightBrakePin, 0, 0, 13000);

  //moving along with left ear
  moveEarRight(rightDirectionPin, rightPwmPin, rightBrakePin, 2000, 50, 3000);
  moveEarRight(rightDirectionPin, rightPwmPin, rightBrakePin, 1000, 30, 3000);
  moveEarLeft(rightDirectionPin, rightPwmPin, rightBrakePin, 3000, 30, 5000);

  //basic movement
  moveEarRight(rightDirectionPin, rightPwmPin, rightBrakePin, 3000, 30, 2000);
  moveEarLeft(rightDirectionPin, rightPwmPin, rightBrakePin, 1000, 30, 1000);
  moveEarLeft(rightDirectionPin, rightPwmPin, rightBrakePin, 2000, 30, 1000)

}
