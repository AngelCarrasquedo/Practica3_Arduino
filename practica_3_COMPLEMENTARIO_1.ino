int led1 = 13;
int led2 = 12;
int led3 = 11;
char leer;

void setup() {

Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {
leer= Serial.read();

if(leer== 'A'){
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
}
else if(leer=='B'){

digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
delay(100);
digitalWrite(led1,HIGH);
delay(1000);
digitalWrite(led1,LOW);
delay(1000);
digitalWrite(led2,HIGH);
delay(1000);
digitalWrite(led2,LOW);
delay(1000);
digitalWrite(led3,HIGH);
delay(1000);
digitalWrite(led3,LOW);
delay(1000);
}else if(leer=='C'){
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
}
}
