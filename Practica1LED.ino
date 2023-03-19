

 
const int outPin =  13;      // the number of the LED pin
int estado = 0;         //variable de entrada
void setup() {
  pinMode(outPin, OUTPUT); // initialize the LED pin as an output:
  pinMode(A0, INPUT);        // inicializo el pin A0 como input
}
void loop() {
  estado = analogRead(A0); //leo la entrada
  if (estado>100) {
    digitalWrite(outPin, HIGH);  //enciendo el LED
  } else {
    digitalWrite(outPin, LOW);   //apago el LED
  }
}
