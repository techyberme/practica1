int tiempo1;
int tiempo2;
int tiempo3;
const int outPin =  13;      // el número del pin
int estado = 0;         //variable de entrada
void setup() {
  pinMode(outPin, OUTPUT); // inicializo el led como output
  pinMode(A0, INPUT);        // inicializo el pin A0 como input
}
void loop() {
  estado = analogRead(A0); //leo la entrada
  if (estado>100) {
    digitalWrite(outPin, HIGH); //enciendo el LED
    tiempo1=millis();           //anoto cuando se ha pulsado
  } else {
    digitalWrite(outPin, LOW);   //apago el LED
    tiempo2=millis();   //anoto el tiempo cuando se ha apagado
    if(tiempo1>2){      //si antes se ha pulsado
    tiempo3=tiempo2-tiempo1;  //calculo el gradiente de tiempo
    Serial.print(tiempo3);    //lo muestro
    Serial.println(" ms");    //retorno de carro
    }
  }
}
