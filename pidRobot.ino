int enable1 = 2;
int for1 = 3;
int back1 = 4;
int enable2 = 5;
int for2 = 6;
int back2 = 7;
//1 p4, 2 p7, 3 p8, 4 p11, 5 p12

int ir1 = 8;
int ir2 = 9;
int ir3 = 10; //9
int ir4 = 11; //10
int ir5 = 13;


void setup() {
  // put your setup code here, to run once:
pinMode(enable1, OUTPUT);
pinMode(for1, OUTPUT);
pinMode(back1, OUTPUT);
pinMode(enable2, OUTPUT);
pinMode(for2, OUTPUT);
pinMode(back2, OUTPUT);
pinMode(ir1, INPUT);
pinMode(ir2, INPUT);
pinMode(ir3, INPUT);
pinMode(ir4, INPUT);
pinMode(ir5, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(enable1, HIGH);
analogWrite(for1, 255);
analogWrite(back1, 0);
digitalWrite(enable2, HIGH);
analogWrite(for2, 255);
analogWrite(back2, 0);
int ir1val = digitalRead(ir1);
int ir2val = digitalRead(ir2);
int ir3val = digitalRead(ir3);
int ir4val = digitalRead(ir4);
int ir5val = digitalRead(ir5);

Serial.print("ir1: ");
Serial.println(ir1val);
Serial.print("ir2: ");
Serial.println(ir2val);
Serial.print("ir3: ");
Serial.println(ir3val);
Serial.print("ir4: ");
Serial.println(ir4val);
Serial.print("ir5: ");
Serial.println(ir5val);

delay(1000);
//1, d1, l0; 2 d0, l1; 3 d0 l1; 4
}
