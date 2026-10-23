#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
byte ledPin = 7;

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  pinMode(ledPin, OUTPUT);
  Serial.println("DHT11 Sensor Test");
  delay(2000);


}

void loop() {
  // read temperature
  float temp = dht.readTemperature();

  // check whether reading is valid
  if(isnan(temp)){
    Serial.println("Sensor reading faild.");
    delay(2000);
    return;
  }

  //display reading
  if(temp >34){
     Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.println(" ℃");
    Serial.println("Temperature is hot");
    Serial.println("----------------------");
    digitalWrite(ledPin, HIGH);
    delay(2000);
  }
  else{
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.println(" ℃");
    Serial.println("Temperature is ohk");
    Serial.println("----------------------");
    digitalWrite(ledPin, LOW);
    delay(2000);
  }
 





}
