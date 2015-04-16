
int sensorPin = 0;
int threshold = 20;

int speakerPin = 9;

int lightNormal;

void setup () {
  lightNormal =  analogRead (sensorPin);
}

void loop () {
  // Purr
  if ( analogRead (sensorPin)> lightNormal + threshold) {
    tone (speakerPin, 0001);
  } else {
    noTone (speakerPin);
  }

  delay (10);
}
