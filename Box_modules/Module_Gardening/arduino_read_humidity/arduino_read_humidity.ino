//define the led pin
int ledPin = 1
//define the buzzer pin
int buzzerPin = 2
//define the pin on the Arduino board where we will receive the data from the sensor
int analogPin = A0;

//set the initial values to 0
int readValue = 0;

void setup() {
  //configure outputs
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  //configure the serial port with the default
  //everything in setup() is executed once, at the begining of the program
  Serial.begin(9600);
}

void loop() {
  //everything in loop() is executed in an infinite loop

  //we read the value at the analog pin
  readValue = analogRead(analogPin);

  Serial.println(readValue);

//sound alarm and turn on LED if the moisture level drops below a threshold (replace 512 with any value you want)
  if (readValue < 512)
  {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 300);
  } else {
    digitalWrite(ledPin, LOW);
  }

  //we wait a second (1000 milliseconds), then go through the loop again
  //this too can be configured as needed
  delay(1000);
}
