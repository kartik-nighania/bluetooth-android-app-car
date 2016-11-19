  // variable to receive data from the serial port
  char incomingByte;
  int pin1=8;
  int pin2=9;
  int pin3=10;
  int pin4=11;

 void setup() 
    {
     Serial.begin(9600); // start serial communication at 9600bps
      }


 void loop() 
  {
  
if( Serial.available() > 0 ) // if data is available to read

  {

     received =Serial.read();
   // int receivedNo = (int)(received -'0'); 
     Serial.print(received);
     
      if(received=='a')
    {
      
digitalWrite(pin3, HIGH);

  digitalWrite(pin4, HIGH);

      Serial.println("front");

      delay(100);

    }

    else
if(x==2)
      {
      
digitalWrite(pin1, HIGH);

      digitalWrite(pin2, HIGH);

      Serial.println("BACK");

      delay(105);

      }

    else
if(x==3)
      {

      digitalWrite(pin1, HIGH);

      digitalWrite(pin4, HIGH);

      Serial.println("LEFT");

      delay(105);

      }
    
else
if(x==4)
      {

      digitalWrite(pin2, HIGH);

      digitalWrite(pin3, HIGH);

      Serial.println("RIGHT");

      delay(105);

      }

  

}


  else
      {

  digitalWrite(pin1, LOW);

  digitalWrite(pin2, LOW);

  digitalWrite(pin3, LOW);

  digitalWrite(pin4, LOW);

  
Serial.println("STOP");



      }



} //PROGRAM END

