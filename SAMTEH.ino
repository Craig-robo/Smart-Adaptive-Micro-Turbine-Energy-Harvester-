// SAMTEH 

const int currentPin = A2;
const int voltagePin = A3;

const int greenLED = 2;
const int yellowLED = 3;
const int redLED = 4;

const int relayPin = 7;
const int buzzerPin = 8;

void setup() {
  Serial.begin(9600);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(relayPin, LOW); // start safe
  Serial.println("SAMTEM Initiated");
}

void loop() {
  float currentV = analogRead(currentPin) * (5.0 / 1023.0);
  float sensedV = analogRead(voltagePin) * (5.0 / 1023.0);

  String mode;

  // Simple protection logic
  if (sensedV < 0.5) {
    mode = "IDLE";
    digitalWrite(relayPin, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  else if (sensedV < 2.0 && currentV < 2.7) {
    mode = "HARVEST";
    digitalWrite(relayPin, HIGH);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  else if (sensedV < 3.0) {
    mode = "LIMIT";
    digitalWrite(relayPin, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  else {
    mode = "PROTECT";
    digitalWrite(relayPin, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }

  Serial.print("Voltage(Vdiv): ");
  Serial.print(sensedV, 2);
  Serial.print(" | CurrentSense(V): ");
  Serial.print(currentV, 2);
  Serial.print(" | MODE: ");
  Serial.println(mode);

  delay(1000);
}