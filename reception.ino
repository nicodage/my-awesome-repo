const int detector = 7; // place la pin 7 comme la pin à laquelle le détecteur est fixée
short int signall;
long int startTime = 0 ;
String code = "";
bool sentence = false;
bool mot = false;
bool pression = false;
bool letter = false;

void setup() {
  Serial.begin(9600);// fixe le clavier de série à la vitesse 9600
  pinMode(detector, INPUT);// place la pin du detecteur en mode entrée
}

String codetoAlpha (String code) {
  if (code == ".-")// si le code est .-
  {
    return "a";//retourner un a
  }
  else if (code == "-..."){//si le code est -....
    return "b";// retourner un b
  }
  else if (code == "-.-."){
    return "c";
  }
  else if (code == "-.."){
    return "d";
  }
  else if (code == "."){
    return "e";
  }
  else if (code == "..-."){
    return "f";
  }
  else if (code == "--."){
    return "g";
  }
  else if (code == "...."){
    return "h";
  }
  else if (code == ".."){
    return "i";
  }
  else if (code == ".---"){
    return "j";
  }
  else if (code == "-.-"){
    return "k";
  }
  else if (code == ".-.."){
    return "l";
  }
  else if (code == "--"){
    return "m";
  }
  else if (code == "-."){
    return "n";
  }
  else if (code == "---"){
    return "o";
  }
  else if (code == ".--."){
    return "p";
  }
  else if (code == "--.-"){
    return "q";
  }
  else if (code == ".-."){
    return "r";
  }
  else if (code == "..."){
    return "s";
  }
  else if (code == "-"){
    return "t";
  }
  else if (code == "..-"){
    return "u";
  }
  else if (code == "...-"){
    return "v";
  }
  else if (code == ".--"){
    return "w";
  }
  else if (code == "-..-"){
    return "x";
  }
  else if (code == "-.--"){
    return "y";
  }
  else if (code == "--.."){
    return "z";
  }
  else if (code == ".----"){
    return "1";
  }
  else if (code == "..---"){
    return "2";
  }
  else if (code == "...--"){
    return "3";
  }
  else if (code == "....-"){
    return "4";
  }
  else if (code == "....."){
    return "5";
  }
  else if (code == "-...."){
    return "6";
  }
  else if (code == "--..."){
    return "7"
  }
  else if (code == "---.."){
    return "8";
  }
  else if (code == "----."){
    return "9";
  }
  else if (code == "-----"){
    return "0";
  }
  else {
    return "*";
  }
}

String timeToSign(long int startTime) {
  if (millis() - startTime < 150) return ".";
  else return "-";
}

void printMessage(String code_, long int startTime, bool letter_, bool mot_, bool sentence_) {
  if (millis() - startTime > 200 && letter_ == true) {
    //Serial.print("printMessage 1\n");
    //Serial.print("code = "+code_+"\n");
    Serial.print(codetoAlpha(code_));
    code = "";
    letter = false;
  }
  if (millis() - startTime > 400 && mot_ == true) {
    Serial.print(" ");
    mot = false;
  }
  if (millis() - startTime > 1400 && sentence_ == true) {
    //Serial.print("printMessage 2\n");
    Serial.print("\n");
    sentence = false;
  }
}

void loop() {
  signall = digitalRead(detector);
  if (pression == false && signall == HIGH) {
    pression = true;
    sentence = true;
    mot = true;
    letter = true;
    startTime = millis();
  } else if (pression == true && signall == LOW) {
    pression = false;
    code += timeToSign(startTime);
    startTime = millis();
  } else if (pression == false && signall == LOW) {
    printMessage(code, startTime, letter, mot, sentence);
  }
  
}
