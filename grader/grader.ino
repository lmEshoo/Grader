#include <SD.h>

int cs = 10;
int powr = 8;

long id = 1;
String FileName="";
void setup(){
  Serial.begin(9600);
  Serial.println("initializing SD");
  pinMode(cs, OUTPUT);
  pinMode(powr, OUTPUT);
  digitalWrite(powr, HIGH);
  if( !SD.begin(cs) ){
   Serial.println("Card failed to begin");
   return; 
  }
  Serial.println("card ready to use");
  
  Serial.println("what is the name of your file?");
  FileName= "A.txt";
  File c1 = SD.open("A.csv", FILE_WRITE);
  if(c1){
   c1.println(", , , , ,");
   String header = "id, a1, a2, M1, M2, Fin";
   c1.println(header);
   c1.close();
   Serial.println(header);
  }
  else
  {
    Serial.println("Couldn't open file");
  }
//  while(c1){
//    char d = SD.open("A.csv", FILE_READ);
//    if(d != '\n')
//  }
} //setup

void loop(){
  String name= "lenny";
  int a1=0,a2=0,M1=0,M2=0;
  if(id==5) a2=5;
  //String dataString = String(id) + ", " + String(name) + ", " + String(a2) + ", " + String(M1) + ", " + String(M2)+ ", " + String(F); 
  
  File file = SD.open("class1.txt");

  char character;
  while(file.available()){
   character = file.read();
   while(character != '\n'){ character = file.read();};
   Serial.println(character);
   
  }
  delay(500);
}//loop

