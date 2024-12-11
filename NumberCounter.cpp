// C++ code
//Anode 7-segment LED
void setup()
{
  pinMode(13, OUTPUT);//A
  pinMode(12, OUTPUT);//B
  pinMode(11, OUTPUT);//C
  pinMode(10, OUTPUT);//D
  pinMode(9, OUTPUT);//E
  pinMode(8, OUTPUT);//G
  pinMode(7, OUTPUT);//F
  pinMode(6, OUTPUT);//Decimal point DP
}

void loop()
{
  //0
  digitalWrite(13, LOW);//A
  digitalWrite(12, LOW);//B
  digitalWrite(11, LOW);//C
  digitalWrite(10, LOW);//D
  digitalWrite(9, LOW);//E
  digitalWrite(8, HIGH);//G
  digitalWrite(7, LOW);//F
  digitalWrite(6,  LOW);//DP
  delay(1000); // Wait for 1000 millisecond(s)
  
  //1
  digitalWrite(13, HIGH);//A
  digitalWrite(12, LOW);//B
  digitalWrite(11, LOW);//C
  digitalWrite(10, HIGH);//D
  digitalWrite(9, HIGH);//E
  digitalWrite(8, HIGH);//G
  digitalWrite(7, HIGH);//F
  digitalWrite(6,  HIGH);//DP
  delay(1000); // Wait for 1000 millisecond(s)
  
  //2
  digitalWrite(13, LOW);//A
  digitalWrite(12, LOW);//B
  digitalWrite(11, HIGH);//C
  digitalWrite(10, LOW);//D
  digitalWrite(9, LOW);//E
  digitalWrite(8, LOW);//G
  digitalWrite(7, HIGH);//F
  digitalWrite(6,  HIGH);//DP
  delay(1000); // Wait for 1000 millisecond(s)
  
  //3
  digitalWrite(13, LOW);//A
  digitalWrite(12, LOW);//B
  digitalWrite(11, LOW);//C
  digitalWrite(10, LOW);//D
  digitalWrite(9, HIGH);//E
  digitalWrite(8, LOW);//G
  digitalWrite(7, HIGH);//F
  digitalWrite(6,  HIGH);//DP
  delay(1000); // Wait for 1000 millisecond(s)
  
  //4
  digitalWrite(13, HIGH);//A
  digitalWrite(12, LOW);//B
  digitalWrite(11, LOW);//C
  digitalWrite(10, HIGH);//D
  digitalWrite(9, HIGH);//E
  digitalWrite(8, LOW);//G
  digitalWrite(7, LOW);//F
  digitalWrite(6,  LOW);//DP
  delay(1000); // Wait for 1000 millisecond(s)
  
  //5
  digitalWrite(13, LOW);//A
  digitalWrite(12, HIGH);//B
  digitalWrite(11, LOW);//C
  digitalWrite(10, LOW);//D
  digitalWrite(9, HIGH);//E
  digitalWrite(8, LOW);//G
  digitalWrite(7, LOW);//F
  digitalWrite(6,  LOW);//DP
  delay(1000); // Wait for 1000 millisecond(s)
  
  //6
  digitalWrite(13, LOW);//A
  digitalWrite(12, HIGH);//B
  digitalWrite(11, LOW);//C
  digitalWrite(10, LOW);//D
  digitalWrite(9, LOW);//E
  digitalWrite(8, LOW);//G
  digitalWrite(7, LOW);//F
  digitalWrite(6,  LOW);//DP
  delay(1000); // Wait for 1000 millisecond(s)
  
  //7
  digitalWrite(13, LOW);//A
  digitalWrite(12, LOW);//B
  digitalWrite(11, LOW);//C
  digitalWrite(10, HIGH);//D
  digitalWrite(9, HIGH); //E
  digitalWrite(8, HIGH); //G
  digitalWrite(7, HIGH); //F
  digitalWrite(6, HIGH); //DP
  delay(1000); //wait 1 second
  
  //8
  digitalWrite(13, LOW); //A
  digitalWrite(12, LOW); //B
  digitalWrite(11, LOW); //C
  digitalWrite(10, LOW); //D
  digitalWrite(9, LOW); //E
  digitalWrite(8, LOW); //G
  digitalWrite(7, LOW); //F
  digitalWrite(6, HIGH); //DP
  delay(1000);
  
  //9
  digitalWrite(13, LOW); //A
  digitalWrite(12, LOW); //B
  digitalWrite(11, LOW); //C
  digitalWrite(10, HIGH); //D
  digitalWrite(9, HIGH); //E
  digitalWrite(8, LOW); //G
  digitalWrite(7, LOW);//F
  digitalWrite(6, LOW);//DP
  delay(1000);
  
  
  
  //digitalWrite(LED_BUILTIN, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
}