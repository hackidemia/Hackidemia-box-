int ledPin1 = 10;
int ledPin2 = 11;
 
int sensor pin = 0;
int sensor threshold = 20;
 
int speakerPin = 9;
 
int light normal; 
  
void setup () {
  pinMode (ledPin1, OUTPUT );
  pinMode (ledPin2, OUTPUT );
   
  light = normal analog read (have sensor);
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
  if ( analog read (have sensor)> light sensor normal + threshold) {
    tone (speakerPin, 0001);
  } else {
    noTone (speakerPin);
  }
   
  // Alive
  if (( random (10000) == 1) && ( analog read (have sensor) <normal light + 100)) {
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
