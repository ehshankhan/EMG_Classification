

#define OPEN 1
#define CLOSE 2
char data;
int m11 = 2; //middle
int m12 = 3; //middle
int m21 = 4;//index
int m22 = 5;//index
int m31 = 9;//THUMB_BOTTOM
int m32 = 10;//THUMB_BOTTOM
int m41 = 11;//THUMB_UP
int m42 = 12;//THUMB_UP
int m51 = 52;//pinky
int m52 = 50;//pinky
int m61 = 48;//ring
int m62 = 46;//ring
const int analogInPin = A0;  
int pinch_open;// Analog input pin that the potentiometer is attached to

int sensorValue = 0;
int counter=0;// value read from the pot
int c=0;// value output to the PWM (analog out)
unsigned long array_sensor__value[250];
int open_flag=0;
int close_flag=0;
int three_pinch_flag=0;
  int open_action=0;
  int close_action=1;
  int three_pinch_action=1;
void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(m11,OUTPUT);
pinMode(m12,OUTPUT);
pinMode(m21,OUTPUT);
pinMode(m22,OUTPUT);
pinMode(m31,OUTPUT);
pinMode(m32,OUTPUT);
pinMode(m41,OUTPUT);
pinMode(m42,OUTPUT);
pinMode(m51,OUTPUT);
pinMode(m52,OUTPUT);
pinMode(m51,OUTPUT);
pinMode(m52,OUTPUT);
pinMode(m61,OUTPUT);
pinMode(m62,OUTPUT);

digitalWrite(m11, LOW);
digitalWrite(m12, LOW);
digitalWrite(m21, LOW);
digitalWrite(m22, LOW);
digitalWrite(m31, LOW);
digitalWrite(m32, LOW);
digitalWrite(m41, LOW);
digitalWrite(m42, LOW);
digitalWrite(m51, LOW);
digitalWrite(m52, LOW);
digitalWrite(m61, LOW);
digitalWrite(m62, LOW);



}

void loop() {
  delay(10);
  close_all();
  delay(1000);
  open_all();
  delay(1000);
  three_pinch_c();
  delay(1000);
  three_pinch_o();
  
  
 
}
void close_all()
{
finger_3(OPEN, 500);
finger_2(OPEN, 500);
finger_1(OPEN, 800);//INDEX

 finger_6(OPEN, 500);
//finger_4(OPEN, 500);//THUMB UPPER
finger_5(OPEN, 500);
  
}
void open_all()
{

finger_3(CLOSE, 400);//THUMB
  finger_2(CLOSE, 800);
//open_all();//open all
 finger_1(CLOSE, 800);//INDEX
  finger_6(CLOSE, 800);

// 
////finger_4(CLOSE, 400);//THUMB UPPER
finger_5(CLOSE, 800);

}

void three_pinch_c()
{
    for(int i=0;i<=2;i++){
     finger_1(OPEN,40);delay(1);//MIDDLE FINGER
    finger_2(OPEN,20);delay(1);//INDEX FINGER//120-OPENING/120-CLOSING
    finger_3(OPEN,25);delay(1);//THUMB_BOTTOM//120-CLOSING-80-OPENING
    finger_4(OPEN,20);delay(1);//THUMB_UPPER//240-OPENING-120-CLOSING
    }
   
    all_stop();

}

void three_pinch_o()
{
for(int j=0;j<=1;j++)
    {
    finger_1(CLOSE,35);delay(1);//MIDDLE FINGER
    finger_2(CLOSE,25);delay(1);//INDEX FINGER//120-OPENING/120-CLOSING
    finger_3(CLOSE,50);delay(1);//THUMB_BOTTOM//120-CLOSING-80-OPENING
    finger_4(CLOSE,50);delay(1);//THUMB_UPPER//240-OPENING-120-CLOSING
    }
    all_stop();

}


void all_stop()
{

    digitalWrite(m11, LOW);
    digitalWrite(m12, LOW);
    
    digitalWrite(m21, LOW);
    digitalWrite(m22, LOW);
    
    digitalWrite(m31, LOW);
    digitalWrite(m32, LOW);
    
    digitalWrite(m41, LOW);
    digitalWrite(m42, LOW);
    
    digitalWrite(m51, LOW);
    digitalWrite(m52, LOW);
   
    digitalWrite(m61, LOW);
    digitalWrite(m62, LOW);
  
}
void finger_1(unsigned char in, unsigned int angle)
{
  if (in==OPEN)
  {
    digitalWrite(m11, LOW);
    digitalWrite(m12, HIGH);
    delay(angle);
    all_stop();
    //close
  }
  else
  {
    digitalWrite(m11, HIGH);
    digitalWrite(m12, LOW);
   delay(angle);
   all_stop();
    //open
  }
}

//Finger 2

void finger_2(unsigned char in, unsigned int angle)
{
  if (in==OPEN)
  {
    digitalWrite(m21, LOW);
    digitalWrite(m22, HIGH);
    delay(angle);
    all_stop();
    //close
  }
  else
  {
  digitalWrite(m21, HIGH);
  digitalWrite(m22, LOW);
  delay(angle);
  all_stop();
    //open
  }
}
//Finger 3

void finger_3(unsigned char in, unsigned int angle)
{
  if (in==OPEN)
  {
    digitalWrite(m31, LOW);
    digitalWrite(m32, HIGH);
    delay(angle);
    all_stop();
    //close
  }
  else
  {
    digitalWrite(m31, HIGH);
    digitalWrite(m32, LOW);
   delay(angle);
   all_stop();
    //open
  }
}
//Finger 4

void finger_4(unsigned char in, unsigned int angle)
{
  if (in==OPEN)
  {
    digitalWrite(m41, LOW);
    digitalWrite(m42, HIGH);
    delay(angle);
    all_stop();
    //close
  }
  else
  {
    digitalWrite(m41, HIGH);
    digitalWrite(m42, LOW);
   delay(angle);
   all_stop();
    //open
  }
}
//Finger 5

void finger_5(unsigned char in, unsigned int angle)
{
  if (in==OPEN)
  {
    digitalWrite(m51, LOW);
    digitalWrite(m52, HIGH);
    delay(angle);
    all_stop();
    //close
  }
  else
  {
    digitalWrite(m51, HIGH);
    digitalWrite(m52, LOW);
    delay(angle);
    all_stop();
    //open
  }
}

void finger_6(unsigned char in, unsigned int angle)
{
  if (in==OPEN)
  {
    digitalWrite(m61, LOW);
    digitalWrite(m62, HIGH);
    delay(angle);
    all_stop();
    //close
  }
  else
  {
    digitalWrite(m61, HIGH);
    digitalWrite(m62, LOW);
    delay(angle);
    all_stop();
    //open
  }
}







