// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(500); 
  digitalWrite(13, LOW);
  delay(500); 
  
  for( int i = 0; i < 2; i+=1 ){
  digitalWrite(12,  HIGH);  
  delay(500); 
  digitalWrite(12, LOW);  
  delay(500);    
  }
  
  for( int i = 0; i < 3; i+=1 ){
  digitalWrite(11, HIGH);
  delay(500); 
  digitalWrite(11, LOW);
  delay(500);
  }
}