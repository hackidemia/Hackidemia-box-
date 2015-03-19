
int ledPin1 = 10;
int ledPin2 = 11;
 
void setup () {
  pinMode (ledPin1, OUTPUT );
  pinMode (ledPin2, OUTPUT ); 
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
   
  delay (10);
}

