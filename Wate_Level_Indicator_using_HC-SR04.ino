// HC-SR04 pins
const int trigPin = 2;
const int echoPin = 3;

// LED pins
const int greenLedPin = 7;
const int yellowLedPin = 8;
const int redLedPin = 9;

// Buzzer pin
const int buzzerPin = 10;

// Constants for distance thresholds
const int greenDistance = 5;   // Green LED threshold (cm)
const int yellowDistance = 10; // Yellow LED threshold (cm)
const int redDistance = 15;    // Red LED and buzzer threshold (cm)

void setup() {
  // Initialize Serial Monitor
  Serial.begin(9600);
  
  // Initialize pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  
  // Turn off LEDs and buzzer initially
  digitalWrite(greenLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(redLedPin, LOW);
  digitalWrite(buzzerPin, LOW);
  
  Serial.println("Distance-based LED and Buzzer Control");
}

void loop() {
  // Trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Calculate the duration of the pulse
  long duration = pulseIn(echoPin, HIGH);
  
  // Calculate distance based on the duration
  float distance_cm = duration * 0.0343 / 2.0;
  
  // Print distance to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
  
  // Control LEDs and buzzer based on distance thresholds
  if (distance_cm <= greenDistance) {
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, LOW);
    digitalWrite(buzzerPin, LOW);
  } else if (distance_cm <= yellowDistance) {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(redLedPin, LOW);
    digitalWrite(buzzerPin, LOW);
  } else if (distance_cm <= redDistance) {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  } else {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }
  
  delay(500); // Delay for stability
}
