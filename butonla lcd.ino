#include <LiquidCrystal.h>
#define Buton 11
#define Led 10
int buton_durumu = 0;
int sayac = 0;
LiquidCrystal ekran(8, 9, 4, 5, 6, 7);
void setup()  {
    ekran.begin(16,2);
    pinMode(Buton, INPUT);
    pinMode(Led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  ekran.home();
  ekran.setCursor(0,0);
  ekran.print("TOPLAM KULLANICI");
  
  buton_durumu =digitalRead(Buton);
  if(buton_durumu == HIGH) {
    sayac ++;
    delay(100);
    digitalWrite(Led,HIGH);
    ekran.setCursor(7,1);
    ekran.print(sayac);
  }
  else{
    digitalWrite(Led,LOW);
  }
}
