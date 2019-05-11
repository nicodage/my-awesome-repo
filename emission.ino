int inByte = 0; // configure la variable qui stockera les données entrantes de série (clavier)
const int laserPin = 10; // place la pin 10 comme la pin à laquelle le laser est fixée
const int time_base = 100; // fixe un point à 100 millisecondes
const int dash = 3*time_base; // fixe un trait à 300 millisecondes

void setup() {
  
Serial.begin(9600); // fixe le clavier de série à la vitesse 9600
pinMode(laserPin,OUTPUT);} // fixe le laser sur le mode sortie

void loop() {

int inByte = 0; // réinitialise la variable série à zéro à chaque fois afin que le code morse clignote une seule fois
 if (Serial.available() > 0){ // vérifie s’il y a des données entrantes de la série (clavier)
  inByte = Serial.read();} // si oui, stocke les données série entrantes dans la variable inByte

// code morse pour un a (.-) 
if (inByte == 'a'){ // vérifie si la lettre a a été tapé sur la série
digitalWrite(laserPin,HIGH); // allume le laser
delay(time_base); // délai: le temps d'un point (100 millisecondes)
digitalWrite(laserPin,LOW); // éteind le laser
delay(time_base); // attend le temps d'un point (Le code morse spécifie le temps entre les parties d’une lettre pour être un point)
digitalWrite(laserPin,HIGH); // allume le laser
delay(dash); // délai: le temps d'un trait (3 fois le temps d'un point)
digitalWrite(laserPin,LOW); // éteind le laser
delay(3*time_base);} // attend le temps de 3 fois le temps d'un point (Le code morse spécifie le temps entre deux lettres pour être 3 points)

// code morse pour un b (-...)
if (inByte == 'b'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un c (-.-.)
if (inByte == 'c'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un d (-..)
if (inByte == 'd'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un e (.)
if (inByte == 'e') {
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un f (..-.)
if (inByte == 'f'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un g (--.)
if (inByte == 'g'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un h (....)
if (inByte == 'h'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un i (..)
if (inByte == 'i'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un j (.---)
if (inByte == 'j'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un k (-.-)
if (inByte == 'k'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un l (.-..)
if (inByte == 'l'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un m (--)
if (inByte == 'm'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un n (-.)
if (inByte == 'n'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un o (---)
if (inByte == 'o'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un p (.--.)
if (inByte == 'p'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un q (--.-)
if (inByte == 'q'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un r (.-.)
if (inByte == 'r'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un s (...)
if (inByte == 's'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un t (-)
if (inByte =='t'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un u (..-)
if (inByte =='u'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un v (...-)
if (inByte == 'v'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour w (.--)
if (inByte == 'w'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un x (-..-)
if (inByte == 'x'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un y (-.--)
if (inByte == 'y'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}


// code morse pour un z (--..)
if (inByte == 'z'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un espace (délai: temps de 7 points)
if (inByte == ' '){
digitalWrite(laserPin,LOW);
delay(7*time_base);} // garde le laser éteind le temps de 7 points, comme spécifié dans le code morse

// code morse por un 1 (.----)
if (inByte == '1'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un 2 (..---)
if (inByte == '2'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un 3 (...--)
if (inByte == '3'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un 4 (....-)
if (inByte == '4'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un 5 (.....)
if (inByte == '5'){
  digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un 6 (-....)
if (inByte == '6'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un 7 (--...)
if (inByte == '7'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un 8 (---..)
if (inByte == '8'){
   digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
 digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
 digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
 digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(time_base);
 digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un 9 (----.)
if (inByte == '9'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(time_base);
digitalWrite(laserPin,LOW);
delay(3*time_base);}

// code morse pour un 0 (----)
if (inByte == '0'){
  digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(time_base);
digitalWrite(laserPin,HIGH);
delay(dash);
digitalWrite(laserPin,LOW);
delay(3*time_base);}
}
