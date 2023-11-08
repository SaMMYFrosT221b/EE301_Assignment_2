const int ip = 7;
const int op = 9;

void setup() {
  pinMode(ip, INPUT);   
  pinMode(op, OUTPUT); 
  Serial.begin(9600);
}
int signal;
void loop() {
    delay(100);
    signal = digitalRead(ip);
    digitalWrite(op,signal);
    Serial.println(signal);
}