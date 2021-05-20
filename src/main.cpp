#include <Arduino.h>

char valor;
char valor2;

void setup() {

  Serial.begin(9600);
  Serial2.begin(9600);
  
}

void loop() {

  if(Serial.available()){

    valor = Serial.read();
    Serial2.write(valor);

    Serial.println("Primer valor");

    Serial.println(valor);

    delay(100);

    if(Serial2.available()){

      valor2 = Serial2.read();
      Serial.write(valor2);

      Serial.println("Segundo valor");

      Serial.println(valor2);

    }
    
  }
  
}