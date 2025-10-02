/*Omar Alhalawani and Yousef AlHarbi
TEJ4M Summative
January 17, 2024
Code to control Wifi Controlled Car
*/

#include <Servo.h>
// Using your ESP8266 with the Blynk App
#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL2eHbschXn"
#define BLYNK_TEMPLATE_NAME "LED TEST"
#define BLYNK_AUTH_TOKEN "ywruN00h9CkLvgjhYEsprtdllJa9MG_n"
#include <ESP8266WiFi.h> //library for wifi connection between ESP-8266 and
phone
#include <BlynkSimpleEsp8266.h>
Servo myservo_turning; // create Servo object to control steering axle
int servoPin_turning=D2;// variable to store the servo position
char ssid[] = "OmarLG"; // wifi SSID
char pass[] = "omarali123"; //wifi password

void setup(){
delay(100);
Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass); // this will send Blynk the
required data for connection
pinMode(D7, OUTPUT); // setup pin for dc motor controlling the backward
acceleration
pinMode(D1, OUTPUT); // setup pin for dc motor controlling the forward
acceleration
myservo_turning.attach(servoPin_turning); //attach pin D2 to turning axle
servo
}

BLYNK_WRITE(V0){ // this function will send data from the Blynk app switch to
the ESP8266
int pin1 = param.asInt(); // this takes the value of a slider from Blynk and
puts it into ‘pin1’
myservo_turning.write(pin1); //the pin value goes from 80 to 140
}

BLYNK_WRITE(V2){// this function will send data from the Blynk app switch to
the ESP8266
int pin2 = param.asInt(); // this takes the value of a slider from Blynk and
puts it into ‘pin2’
if (pin2 == 2){ // if slider is pulled up, value is 2 and car accelerates
forward
digitalWrite(D1, HIGH);
digitalWrite(D7, LOW); }
else if (pin2 == 0){ // if slider is pulled down, value is 0 and car
accelerates backward
digitalWrite(D1, LOW);
digitalWrite(D7, HIGH); }
else{ // if slider is not pulled, value is 1 and car does not
accelerate
digitalWrite(D1, LOW);
digitalWrite(D7, LOW); }}

void loop(){
Blynk.run();}
