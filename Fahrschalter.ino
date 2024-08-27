/*  M8C Bielefeld Kiepe Fahrschalterausleseprogramm
 *  Pinbelegung anhand Zeichnung
 */

#define PIN_SWG A0
#define PIN_BREMSEN 3
#define PIN_SIFA 2
#define PIN_SS_1 4
#define PIN_SS_0 5
#define PIN_SS_V 6
#define PIN_ENTKUPPELN 7


void setup() {
  // Alle Pins sind Inputs
  pinMode(PIN_SWG, INPUT);
  pinMode(PIN_BREMSEN, INPUT_PULLUP);
  pinMode(PIN_SIFA, INPUT_PULLUP);
  pinMode(PIN_SS_0, INPUT_PULLUP);
  pinMode(PIN_SS_1, INPUT_PULLUP);
  pinMode(PIN_SS_V, INPUT_PULLUP);
  pinMode(PIN_ENTKUPPELN, INPUT_PULLUP);
  Serial.begin(9600);
  
}

void loop() {

  Serial.print("Sollwertgeber Wert: ");
  Serial.println(analogRead(PIN_SWG));
  Serial.print("SiFa-Taster: ");
  Serial.println(digitalRead(PIN_SIFA));
  Serial.print("Bremse: ");
  Serial.println(digitalRead(PIN_BREMSEN));

  Serial.print("SS 0: ");
  Serial.println(digitalRead(PIN_SS_0));


  Serial.print("SS 1: ");
  Serial.println(digitalRead(PIN_SS_1));


  Serial.print("SS V: ");
  Serial.println(digitalRead(PIN_SS_V));

  Serial.print("Entkuppeln: ");
  Serial.println(digitalRead(PIN_ENTKUPPELN));


  delay(10);
}
