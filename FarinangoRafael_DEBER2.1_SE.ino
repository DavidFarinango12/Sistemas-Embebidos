/*
 * CAPITULO II: PUERTOS DIGITALES
 * CODIGO 1: MANEJO DE PUERTOS CONFIGURADOS COMO SALIDAS
 * OBJETIVO: Realizar el código necesario para encender 4 leds de forma síncrona, es decir, encender uno por uno. Cada vez que se encienda un led los demás deben estar apagados.
 * NOMBRE: FARINANGO RAFAEL
 */

const int led1 = 8; //declaro mis variables constantes led1, led2, led3, led4
const int led2 = 9; 
const int led3 = 10;
const int led4 = 11; 
 
void setup() {
  pinMode(led1,OUTPUT); //declaro el pin 8 como salida
  pinMode(led2,OUTPUT); //declaro el pin 9 como salida
  pinMode(led3,OUTPUT); //declaro el pin 10 como salida
  pinMode(led4,OUTPUT); //declaro el pin 11 como salida
}

void loop() {
  digitalWrite(led1,HIGH); //envia 5v al pin 8  
  digitalWrite(led2,LOW); //envia 0v al pin 9
  digitalWrite(led3,LOW); //envia 0v al pin 10
  digitalWrite(led4,LOW); //envia 0v al pin 11
  delay(1000); //se detiene 1 segundo 
  digitalWrite(led1,LOW); //envia 0v al pin 8
  digitalWrite(led2,HIGH); //envia 5v al pin 9 
  digitalWrite(led3,LOW); //envia 0v al pin 10
  digitalWrite(led4,LOW); //envia 0v al pin 11
  delay(1000); //se detiene 1 segundo 
  digitalWrite(led1,LOW); //envia 0v al pin 8  
  digitalWrite(led2,LOW); //envia 0v al pin 9
  digitalWrite(led3,HIGH); //envia 5v al pin 10
  digitalWrite(led4,LOW); //envia 0v al pin 11
  delay(1000); //se detiene 1 segundo 
  digitalWrite(led1,LOW); //envia 0v al pin 8    
  digitalWrite(led2,LOW); //envia 0v al pin 9  
  digitalWrite(led3,LOW); //envia 0v al pin 10  
  digitalWrite(led4,HIGH); //envia 5v al pin 11  
  delay(1000); //se detiene 1 segundo 
}
