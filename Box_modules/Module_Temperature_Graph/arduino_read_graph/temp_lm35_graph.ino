//define the pin on the Arduino board where we will receive the data from the sensor
int analogPin = A1;
//set the initial values to 0
int readValue = 0;
float temperature = 0;
float temperatureF = 0;

void setup() {
  //configure the serial port with the default
  //everything in setup() is executed once, at the begining of the program
  Serial.begin(9600);
}

void loop() {
  //everything in loop() is executed in an infinite loop

  //we read the value at the analog pin
  readValue = analogRead(analogPin);
  //make some transformations to celsius and fahrenheit
  temperature = (readValue * 0.0049);
  temperature = temperature * 100;
  temperatureF = (temperature * 1.8) + 32;
  //we print the desired value to the serial port
  //if you need fahrenheit values, comment the following line and uncomment the one ofter it
  Serial.println(temperature);
  //Serial.println(temperatureF);

  //we wait a second (1000 milliseconds), then go through the loop again
  //this too can be configured as needed
  delay(1000);
}
