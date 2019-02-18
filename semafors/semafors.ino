/**********************************************************************************
**                                                                               **
**                              semafor                                **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int led0 = 7;          
const int led1 = 8;          
const int led2 = 9;          
const int led3 = 10;         
const int led4 = 11;         
const int led5 = 12;         

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);    
  pinMode(led4, OUTPUT);     
  pinMode(led5, OUTPUT);     
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(led0, HIGH);     
  digitalWrite(led3, HIGH);    
  delay(500);
  digitalWrite(led3, LOW);    
  digitalWrite(led5, HIGH);
  delay(2000);
  digitalWrite(led5, LOW);    
  digitalWrite(led4, HIGH);
  delay(500);
  digitalWrite(led4, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led0, LOW);
  digitalWrite(led2, HIGH);
  delay(2000);
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led0, HIGH);
    
}
