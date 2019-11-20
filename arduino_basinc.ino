/*
FSR - Force Sensing Resistor
Kuvvete duyarlı direnç örneği
*/

int basinc;
const int arduLed1 = 4; //Ardustar Led 1
const int arduLed2 = 5; //Ardustar Led 2
const int arduLed3 = 6; //Ardustar Led 3
const int arduLed4 = 7; //Ardustar Led 4
int buzzerPin = 8;
int LDRPin = 0;
void setup () {   
    
  Serial.begin(9600);
    // Ledlerin bir çıkış olarak tanımlanması
  pinMode(arduLed1, OUTPUT);
  pinMode(arduLed2, OUTPUT);
  pinMode(arduLed3, OUTPUT);
  pinMode(arduLed4, OUTPUT);
  pinMode(buzzerPin,OUTPUT);
}

void loop()
{     
  basinc = analogRead(0);
  Serial.println(basinc);    
                                         
  if (basinc > 100)
    digitalWrite(arduLed1, HIGH); // Led 1 yan
    digitalWrite(buzzerPin,HIGH);
  if (basinc > 200) 
  {
    digitalWrite(arduLed1, HIGH); // Led 1 yan                
    digitalWrite(arduLed2, HIGH);   // Led 2 yan
    digitalWrite(buzzerPin,HIGH);
  }
                      
  if (basinc > 300)
  {
    digitalWrite(arduLed1, HIGH); // Led 1 yan                
    digitalWrite(arduLed2, HIGH);   // Led 2 yan
    digitalWrite(arduLed3, HIGH);   // Led 3 yan
    digitalWrite(buzzerPin,HIGH);
  }                         
  if (basinc > 400)
  {
    digitalWrite(arduLed1, HIGH); // Led 1 yan                
    digitalWrite(arduLed2, HIGH);   // Led 2 yan
    digitalWrite(arduLed3, HIGH);   // Led 3 yan
    digitalWrite(arduLed4, HIGH);   // Led 4 yan
    digitalWrite(buzzerPin,HIGH);
  }   
  else          // eğer hiç bir butona basılmamış ise
  {
    digitalWrite(arduLed1 ,  LOW); // tüm ledleri söndür.
    digitalWrite(arduLed2 ,  LOW);
    digitalWrite(arduLed3 ,  LOW);
    digitalWrite(arduLed4 ,  LOW);
    digitalWrite(buzzerPin,LOW);
  }
}
