
int sensor pin = 0;
int sensor threshold = 20;
 
int light normal; 
 
void setup () {
  light = normal analog read (have sensor);
}
  
void loop () {
  // Purr
  if ( analog read (have sensor)> light sensor normal + threshold) {
    tone (speakerPin, 0001);
  } else {
    noTone (speakerPin);
  }
 
  delay (10);
}

