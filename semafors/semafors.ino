/**********************************************************************************
**                                                                               **
**                              semafor                                **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int ledA = 5;          
const int ledB = 6;          
const int ledC = 7;          
const int ledD = 8;         
const int ledE = 9;         
const int ledF = 10;
const int ledG = 11;
const int led = 12;         
unsigned long a;
//********** Setup ****************************************************************
void setup()
{
  pinMode(ledA, OUTPUT);     
  pinMode(ledB, OUTPUT);     
  pinMode(ledC, OUTPUT);     
  pinMode(ledD, OUTPUT);    
  pinMode(ledE, OUTPUT);     
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(led , OUTPUT);  

  a= 500;
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite (ledA, HIGH);   // número 0 
  digitalWrite(ledB, HIGH);     
  digitalWrite(ledC, HIGH);     
  digitalWrite(ledD, HIGH);     
  digitalWrite(ledE, HIGH); 
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, LOW);   

  delay(a);

  digitalWrite (ledA, LOW);   // número 1
  digitalWrite(ledB, HIGH);     
  digitalWrite(ledC, HIGH);     
  digitalWrite(ledD, LOW);     
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW); 

  delay(a);
  
  digitalWrite (ledA, HIGH);   // número 2 
  digitalWrite(ledB, HIGH);     
  digitalWrite(ledC, LOW);     
  digitalWrite(ledD, HIGH);     
  digitalWrite(ledE, HIGH); 
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, HIGH);   

  delay(a);
  
  digitalWrite (ledA, HIGH);   // número 3 
  digitalWrite(ledB, HIGH);     
  digitalWrite(ledC, HIGH);     
  digitalWrite(ledD, HIGH);     
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, HIGH);
  
  delay(a);
  
  digitalWrite (ledA,LOW);   // número 4 
  digitalWrite(ledB, HIGH);     
  digitalWrite(ledC, HIGH);     
  digitalWrite(ledD, LOW);     
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);

  delay(a);
  
  digitalWrite (ledA,HIGH);   // número 5 
  digitalWrite(ledB, LOW);     
  digitalWrite(ledC, HIGH);     
  digitalWrite(ledD, HIGH);     
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);

  delay(a);
  
  digitalWrite (ledA,LOW);   // número 6
  digitalWrite(ledB, LOW);     
  digitalWrite(ledC, HIGH);     
  digitalWrite(ledD, HIGH);     
  digitalWrite(ledE, HIGH); 
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);

  delay(a);
  
  digitalWrite (ledA,HIGH);   // número 7
  digitalWrite(ledB, HIGH);     
  digitalWrite(ledC, HIGH);     
  digitalWrite(ledD, LOW);     
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);

  delay(a);
  
  digitalWrite (ledA,HIGH);   // número 8 
  digitalWrite(ledB, HIGH);     
  digitalWrite(ledC, HIGH);     
  digitalWrite(ledD, HIGH);     
  digitalWrite(ledE, HIGH); 
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);

  delay(a);
  
  digitalWrite (ledA,HIGH);   // número 9 
  digitalWrite(ledB, HIGH);     
  digitalWrite(ledC, HIGH);     
  digitalWrite(ledD, LOW);     
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);

  delay(a);
    
}
