/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
***********TRONCAR**************
***********25-03-2019**************
*V1.1v
*/
 


const int M11 = 9;// Maping the Motor Driver Pins
const int M12 = 10;
const int M21 = 12;
const int M22 = 13;
const int E1 = 8;
const int E2 = 11;


  void setup() 

    {
      pinMode(M11,OUTPUT);//Configuring the Pin As output      
      pinMode(M12,OUTPUT);
      pinMode(M21,OUTPUT);
      pinMode(M22,OUTPUT);
      pinMode(E1,OUTPUT);
      pinMode(E2,OUTPUT);
      
      Serial.begin(9600); // Starts the serial communication
    }

      void loop() 
    
       {

         Serial.println("FORWARD....");
      forward();
      delay(5000);
      Serial.println("Backword.");
      backward();
      delay(5000);
      Serial.println("LEFT");
      left();
      delay(5000);
      Serial.println("Right");
      
      right();
      delay(5000);
      Serial.println("StopS");
      stop_car();
      delay(5000);
      
        
         
       }
       void forward()
       {
         digitalWrite(M11,HIGH);
         digitalWrite(M12,LOW);
         digitalWrite(M21,HIGH);
         digitalWrite(M22,LOW);
         digitalWrite(E1,HIGH);
         digitalWrite(E2,HIGH); 
       }
       void backward()
       {
         digitalWrite(M12,HIGH);
         digitalWrite(M11,LOW);
         digitalWrite(M22,HIGH);
         digitalWrite(M21,LOW);
         digitalWrite(E1,HIGH);
         digitalWrite(E2,HIGH); 
       }
        void left()
       {
         digitalWrite(M12,HIGH);
         digitalWrite(M11,LOW);
         digitalWrite(M22,HIGH);
         digitalWrite(M21,LOW);
         digitalWrite(E1,HIGH);
         digitalWrite(E2,HIGH); 
       }
       
        void right()
       {
         digitalWrite(M12,HIGH);
         digitalWrite(M11,LOW);
         digitalWrite(M22,HIGH);
         digitalWrite(M21,LOW);
         digitalWrite(E1,HIGH);
         digitalWrite(E2,HIGH); 
       }
       
        void stop_car()
       {
         digitalWrite(E1,LOW);
         digitalWrite(E2,LOW); 
       }
