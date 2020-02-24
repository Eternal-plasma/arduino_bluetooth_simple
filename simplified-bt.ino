//Edited by Eternal-plasma :)
char Bt_read = 0;                //Variable for storing Bluetooth recive
void setup() 
{
  Serial.begin(9600);         //Sets the data rate in bits per second (baud) 
  pinMode(13, OUTPUT);        //Sets digital pin 13 as output pin
}
void loop()
{
  if(Serial.available() > 0)  //if you can get data then......
  {
    Bt_read = Serial.read();      //Read the incoming data and store it into variable
    Serial.print(Bt_read);        //Print Value of Incoming_value in Serial monitor
    Serial.print("\n");        //New line 
    if(Bt_read == '1')            //Checks whether value of Incoming_value is equal to 1 
      digitalWrite(13, HIGH);  //If value is 1 then LED turns ON
    else if(Bt_read == '0')       //Checks whether value of Incoming_value is equal to 0
      digitalWrite(13, LOW);   //If value is 0 then LED turns OFF
  }                            
 
}  
