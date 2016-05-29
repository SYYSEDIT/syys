
#include <Stepper.h>
const int stepsPerRevolution = 64;  // change this to fit the number of steps per revolution for your motor
// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8,9,10,11);  
const int aInPin=A0;
int val;
void setup() { 
// set the speed at 60 rpm: 
myStepper.setSpeed(200);
// initialize the serial port:
Serial.begin(9600);
}
void loop() {
  val=analogRead(aInPin);
  val=map(val,0,1023,0,99); 
  Serial.println(val);
  // step one revolution  in two direction:
  if(val>50){
    Serial.println("clockwise"); 
    //原library是整步,整步走的角度是半步走的角度的两倍,半步走的声音比较小,平稳些,启动时最好是半步的走比较稳定    
    //022中library修改为半步模式不成功？？？FUCK    
    //四拍运行时步距角为θ=360度/（revolution*4）（俗称整步），八拍运行时步距角为θ=360度/（revolution*8）（俗称半步）    
    myStepper.step(stepsPerRevolution/2);//  
    delay(500);  
    }
   else{
    // step one revolution in the other direction:
    Serial.println("counterclockwise");
    myStepper.step(-stepsPerRevolution/2);
    delay(500);
    }
  }


