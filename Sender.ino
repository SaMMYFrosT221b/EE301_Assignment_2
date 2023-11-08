
String t =  "011010110111011010110111";
void setup() {
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i = 0; i<t.length(); i++){
    if(t[i] != '1'){
      digitalWrite(4, LOW);
    }
    else{
        digitalWrite(4, HIGH);
    }
    delay(200);
  }
}