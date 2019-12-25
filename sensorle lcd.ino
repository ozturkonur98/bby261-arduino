#include <LiquidCrystal.h>
#define echoPin 12
#define trigPin 11
#define buzzerPin 13   
int x=0;
int maximumRange = 50;
int minimumRange = 0;
LiquidCrystal ekran(8, 9, 4, 5, 6, 7);


void setup() {
  ekran.begin(16,2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  ekran.home();
  ekran.setCursor(0,0);
  ekran.print("TOPLAM KULLANICI");
  if (melodi == HIGH);
   x=x++;
   ekran.setCursor(7,1);
   ekran.print(x);
  int olcum = mesafe(maximumRange, minimumRange);
  melodi(olcum*10);
 } 

int mesafe(int maxrange, int minrange)
{
  long duration, distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2;
  delay(50);    // 50ms bekliyoruz.

  if(distance >=maxrange || distance <= minrange)
  return 0;
  return distance;
  
}

int melodi(int dly)
{
  tone(buzzerPin, 440);
  delay(dly);
  noTone(buzzerPin);
  delay(dly);
}

 
