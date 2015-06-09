//Connect the Gas sensor to A0 for this project
//Connect a LED to pin 2 to get a light alarm when the gas reaches a certain value

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 2;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW);
}

             
void loop() {
    float vol;
    int sensorValue = analogRead(sensorPin);
    vol=(float)sensorValue/1024;
    Serial.print("The gas density is ");
    Serial.println(vol);

    if (vol >= 300){
    	digitalWrite(ledPin, HIGH);
    } else {
    	digitalWrite(ledPin, LOW);
    }

    delay(100);
}
