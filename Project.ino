int trigPin = 9;
int echoPin = 8;
int Buzzer = 11;
void setup() 
{
	Serial.begin(9600); 
	pinMode(Buzzer, OUTPUT);
	pinMode(trigPin, OUTPUT);
  	
	pinMode(echoPin, INPUT);
}
void loop() 
{
	long duration, distance;
	digitalWrite(trigPin,HIGH);
	//delayMicroseconds(1000);
	digitalWrite(trigPin, LOW);
	duration=pulseIn(echoPin, HIGH);
	distance =(duration/2)/29.1;
	Serial.print(distance);
	Serial.println("CM");
	//delay(10);
	if((distance<=100)) 
	{
		digitalWrite(Buzzer, HIGH);
	}
	else if(distance>100)
	{
		digitalWrite(Buzzer, LOW);
	}
}