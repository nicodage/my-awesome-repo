const int detector = 7; // place le pin 7 comme la pin à laquelle le détecteur est fixée
short int signall; // initialisation de la variable signall qui vaut HIGH quand un signal est reçu et LOW dans le cas contraire
long int startTime = 0 ; // initialisation de la variable startTime qui est le moment à laquelle le temps est déclenché
String code = ""; //initialisation de la variable code qui contiendra le code morse
bool sentence = false; //initialisation de la variable "sentence" qui vaut true quand on se trouve dans une phrase et false dans le cas contraire
bool mot = false; //initialisation de la variable "mot" qui vaut true quand on se trouve dans un mot et false dans le cas contraire
bool pression = false; //initialisation de la variable "pression" qui vaut true si au temps t-1 un signal a été reçu et false dans le cas contraire 
bool letter = false; //initialisation de la variable "letter" qui vaut true quand on est dans une lettre et false dans le cas contraire

void setup() {
  Serial.begin(9600);// fixe le clavier de série à la vitesse 9600
  pinMode(detector, INPUT);// place le pin du detecteur en mode entrée
}

String codetoAlpha (String code) { // crée une fonction qui traduit le code morse en alphabet
  if (code == ".-")// si le code est ".-"
  {
    return "a";//retourner un a
  }
  else if (code == "-..."){
    return "b";
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
    return "7";
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
  else { // sinon retourner une étoile
    return "*";
  }
}

String timeToSign(long int startTime) {
  if (millis() - startTime < 150) return "."; // si le temps qui s'est déroulé moins le moment où le temps s'est déclenché vaut moins de 150ms, alors c'est un point 
  else return "-"; // sinon c'est un tiret 
}

void printMessage(String code_, long int startTime, bool letter_, bool mot_, bool sentence_) { // fonction qui affiche le code traduit
  if (millis() - startTime > 200 && letter_ == true) { // si le temps qui s'est déroulé vaut plus de 200ms et que nous sommes dans yne lettre
    Serial.print(codetoAlpha(code_)); // affiche le résultat
    code = ""; // on réinitialise code
    letter = false; // letter devient false 
  }
  if (millis() - startTime > 400 && mot_ == true) { //// si le temps qui s'est déroulé vaut plus de 400ms
    Serial.print(" "); // affiche un espace
    mot = false; // la variable mot devient "false", c'est la fin du mot 
  }
  if (millis() - startTime > 1400 && sentence_ == true) { //si le temps qui s'est déroulé vaut plus de 1400ms et que l'on est dans une phrase
    Serial.print("\n"); // on revient a la ligne
    sentence = false; // la variable sentence devient false c'est la fin de la phrase 
  }
}

void loop() {
  signall = digitalRead(detector); // on crée la variable signall égal à digitalRead(detector) étant HIGH si on recoit un signal ou LOW si l'on n'en recoit pas
  if (pression == false && signall == HIGH) { // si au temps t-1 il n'y avait pas de signal mais que maintenant il y en a un 
    pression = true; // pression devient true 
    sentence = true; // sentence devient true
    mot = true; // mot devient true 
    letter = true; // lettre devient true 
    startTime = millis(); // startTime devient la valeur de la millis
  } else if (pression == true && signall == LOW) { // sinon si à l'instant t-1 il y avait un signal mais qu'il n'y en a plus maintenant
    pression = false; // pression devient false 
    code += timeToSign(startTime); // on ajoute à "code" le code morse
    startTime = millis(); // startTime devient la valeur millis
  } else if (pression == false && signall == LOW) { // sinon si à l'instant t-1 il n'y avait pas de pression et qu'il n'y en a toujours pas
    printMessage(code, startTime, letter, mot, sentence); // affiche le message 
  }
  
}
