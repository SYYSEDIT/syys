/*
EXcode 8-1
*/
// motor A
int dir1PinA = 13;
int dir2PinA = 12;
int speedPinA = 10;
// motor B

int dir1PinB = 9;
int dir2PinB = 8;
int speedPinB = 6;

int speed;
int dir;

void setup()
{
  pinMode(dir1PinA,OUTPUT);
  pinMode(dir2PinA,OUTPUT);
  pinMode(speedPinA,OUTPUT);
   pinMode(dir1PinB,OUTPUT);
  pinMode(dir2PinB,OUTPUT);
  pinMode(speedPinB,OUTPUT);
  
  
  speed = 0;
  dir = 1;
}

void MOTORDRIVE(int speed,int dir)
{
   analogWrite(speedPinA,speed);
   if (dir == 1)
   analogWrite(speedPinB,speed);
   if (dir == 1)
   
      {
        digitalWrite(dir1PinA,LOW);
        digitalWrite(dir2PinA,HIGH);
         digitalWrite(dir1PinB,LOW);
        digitalWrite(dir2PinB,HIGH);
      }
   else
      {
        digitalWrite(dir2PinA,HIGH);
        digitalWrite(dir2PinA,LOW);
         digitalWrite(dir2PinB,HIGH);
        digitalWrite(dir2PinB,LOW);
        
      }
}
void loop()
{
  MOTORDRIVE(speed,dir);
  speed += 20;
  if (speed>225)
     speed=0;
  
  if (1 == dir)
     dir = 0;
  else
     dir = 1;
  delay(1000);
}
  

