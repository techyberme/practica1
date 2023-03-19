
//hacemos el programa tomando como valores de referencia que cuando lo pulsemos levemente el condensador
//tendrá unos 20pf y cuando lo pulsemos en toda la supercie el condensador tendrá unos 60 pf

int motorPin = 7;
int trigPin = 3;
int velocidad;
int entrada;
void setup() { 
  pinMode(A0, INPUT);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
 } 
 
 
void loop() { 
   entrada = analogRead(A0);  //leo la entrada
  velocidad =  (entrada*130); //multiplico por 130
  Serial.print(velocidad); //aparece en el serial
  Serial.print("\n");
    if (velocidad >= 50 && velocidad <= 255)
    {
      analogWrite(motorPin, velocidad); //escribo la velocidad en el motor   
     
  }
  else{
    analogWrite(motorPin,0);
  }
   
  delay(200);
} 
