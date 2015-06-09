//define the pin on the Arduino board where we will receive the data from the sensor
int analogPin = A0;

//set the initial values to 0
int readValue = 0;

void setup() {
  //configure the serial port with the default
  //everything in setup() is executed once, at the begining of the program
  Serial.begin(9600);
}

void loop() {
  //everything in loop() is executed in an infinite loop

  //we read the value at the analog pin
  readValue = analogRead(analogPin);

  Serial.println(readValue);

  //we wait a second (1000 milliseconds), then go through the loop again
  //this too can be configured as needed
  delay(1000);
}
