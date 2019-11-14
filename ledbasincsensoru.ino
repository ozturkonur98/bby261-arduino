/*
FSR - Force Sensing Resistor
Kuvvete duyarlı direnç örneği
*/

int basinc;
const int arduLed1 = 4; //Ardustar Led 1
const int arduLed2 = 5; //Ardustar Led 2
const int arduLed3 = 6; //Ardustar Led 3
const int arduLed4 = 7; //Ardustar Led 4

void setup () {     
  Serial.begin(9600);
    // Ledlerin bir çıkış olarak tanımlanması
  pinMode(arduLed1, OUTPUT);
  pinMode(arduLed2, OUTPUT);
  pinMode(arduLed3, OUTPUT);
  pinMode(arduLed4, OUTPUT);
}

void loop() {     
  basinc = analogRead(0);
  Serial.println(basinc);                                           
  if (basinc > 100);
    digitalWrite(arduLed1, HIGH);   // Led 1 yan
  delay(1000);  
  if (basinc > 200);                     
  digitalWrite(arduLed2, HIGH);   // Led 2 yan
  delay(1000);                      
  if (basinc > 300);
  digitalWrite(arduLed3, HIGH);   // Led 3 yan
  delay(1000);                       
  if (basinc > 400);
  digitalWrite(arduLed4, HIGH);   // Led 4 yan
  delay(1000);  
                    
  if (basinc < 100);
  digitalWrite(arduLed1, LOW);   // Led 1 sön
  if (basinc < 200);
  delay(100);                       
  digitalWrite(arduLed2, LOW);   // Led 2 yan
  delay(100); 
  if (basinc < 300);                      
  digitalWrite(arduLed3, LOW);   // Led 3 yan
  delay(100); 
  if (basinc < 400);                      
  digitalWrite(arduLed4, LOW);   // Led 4 yan
  delay(100);   
}
