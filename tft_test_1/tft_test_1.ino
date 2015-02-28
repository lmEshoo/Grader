#include <Keypad.h>

#include <serial_tftClient.h>


byte shiftX,shiftY;

const byte ROWS = 4; // Four rows
const byte COLS = 4; // Three columns
// Define the Keymap
char keys[ROWS][COLS] = {
  {'1','4','7','*'},
  {'2','5','8','0'},
  {'3','6','9','#'},
  {'A','B','C','D'}
};
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte rowPins[ROWS] = { 9, 8, 7, 6 };
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 13,12, 11, 10 }; 

// Create the Keypad
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

int xPosition = 100,
    yPosition = 102;
byte dummy=8;

char password[] = {'1','3','5','6','D'};
char passIn[6];
boolean pass = false;
byte count;
byte passCheck;
void setup(){
  Serial.begin(9600);
  setRotation(3); //0 ver 3 hor

  
  //PrintText("12345678912345678912345678",0,15,8);
  fillScreen(8);
  setTextSize(5);
  for(int j=0; j<2; j++){
    PrintText(" lenny is awesome!!!",0,15,3);//s,x,y,color
    delay(25);
    PrintText(" lawesome",0,75,4);//s,x,y,color
    delay(25);
  }
  delay(2000);
  fillScreen(1);
  setTextSize(2);
  
    PrintText("     lenny is awesome",0,15,8);//s,x,y,color
    delay(50);
    PrintText("for making the grader",0,40,8);//s,x,y,color
    delay(50);
  setTextSize(2);


}
void loop(){
    PrintText("     lenny is awesome",0,15,8);//s,x,y,color
    delay(500);
    PrintText("  for making the grader",0,35,8);//s,x,y,color
    delay(500);
    
  }
 /* while(pass==false){
    
    dummy = byte(random(2,9));
  
    char key = kpd.getKey();
    if(key){
      PrintChar(key, xPosition, yPosition, dummy);
      xPosition += 24;
      if(xPosition > 220){
                                                //yPosition += 32;
        xPosition = 100; 
      }

         fillScreen(1);
         
         PrintText("WELCOME!", 64, 102, 3);
         
}
  }}
*/
  
