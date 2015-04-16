int ledPin1 = 10;
int ledPin2 = 11;

int sensorPin = A0;
int threshold = 20;

int speakerPin = 9;

int lightNormal;

void setup () {
  pinMode (ledPin1, OUTPUT );
  pinMode (ledPin2, OUTPUT );

  lightNormal = analogRead (sensorPin);
}

void loop () {
  // Switch LEDs for eyes
  digitalWrite (ledPin1, HIGH );
  digitalWrite (ledPin2, HIGH );

  // Wink
  if ( random (500) == 1) {
    digitalWrite (ledPin1, LOW );
    digitalWrite (ledPin2, LOW );
    delay (50);
  }

  // Purr
  if ( analogRead (sensorPin) < lightNormal - threshold) {
    tone (speakerPin, 0001);
  } else {
    noTone (speakerPin);
  }

  // Alive
  if (( random (10000) == 1) && ( analogRead (sensorPin) < lightNormal + 100)) {
    tone (speakerPin, 1200);
    delay (100);
    tone (speakerPin, 800);
    delay (200);
    tone (speakerPin, 1000);
    delay (200);
    tone (speakerPin, 1200);
    delay (100);
  }

  delay (10);
}
