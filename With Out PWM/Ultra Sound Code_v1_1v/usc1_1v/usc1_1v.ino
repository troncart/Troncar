/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
***********TRONCAR**************
***********25-03-2019**************
*V1.1v
*/


// Maping the Motor Driver Pins
const int M11 = 9;
const int M12 = 10;
const int M21 = 12;
const int M22 = 13;
const int E1 = 8;
const int E2 = 11;

//Ultrasound HC-SR04 Pin
const int trigPin = 3;
const int echoPin = 2;

long duration;
int distance;
int i;


  void setup() 

    {
      pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
      pinMode(echoPin, INPUT); // Sets the echoPin as an Input

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

        //Calculating the distance
        digitalWrite(trigPin, LOW);
        delayMicroseconds(2);
        digitalWrite(trigPin, HIGH);// Sets the trigPin on HIGH state for 10 micro seconds
        delayMicroseconds(10);
        digitalWrite(trigPin, LOW);
        duration = pulseIn(echoPin, HIGH);// Reads the echoPin, returns the sound wave travel time in microseconds
        distance= duration*0.034/2;// Calculating the distance
        Serial.print("Distance: ");
        Serial.print(distance);// Prints the distance on the Serial Monitor

        if(distance > 10)
         {
          forward();
          Serial.println("FORWARD....");
         }
         if (distance <= 10)
         {
          for (i=0; i<50; i++)
            {
              left();
              Serial.println("TURN....");
            }
         }
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
