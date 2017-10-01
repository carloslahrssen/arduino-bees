#include <IRremote.h>
#include <boarddefs.h>
#include <ir_Lego_PF_BitStreamEncoder.h>
#include <IRremoteInt.h>

#include <DHT.h>

int led = 13;
int irRec =2;
int irTran=13;
int photo=A1;
const int temp=A0;
IRrecv irrecv(irRec);
IRsend irsend;


int recVal= 0;
int photoVal = 0;
const int B = 4275;
const int R0 = 100000;

decode_results result;

//DHT dht(A0,DHT11);
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
//  pinMode(led, OUTPUT);  
  pinMode(irRec,INPUT);
  pinMode(irTran,OUTPUT);
  irrecv.enableIRIn();
  Serial.begin(9600);
  
  //dht.begin();  
}

// the loop routine runs over and over again forever:
void loop() {
  
  //irsend.send*
  photoVal=analogRead(photo);
  int a = analogRead(temp);
  float R=1023.0/a-1.0;
  R=R0*R;
  float temp=1.0/(log(R/R0)/B+1/298.15)-273.15;
  
  Serial.println(irrecv.decode(&result);
 // Serial.print("Temperature:");
  Serial.print("\" temp\": \"");
  Serial.print(temp*1.8+32);
  Serial.println("\",");
  Serial.print("\" photo\": \"");
  Serial.println(photo);
   Serial.print("\",");
//  Serial.print("Photoresistor Inside:");?
//  Serial.println(sensorValue0);
//    Serial.print("Photoresistor Outside:");
//  Serial.println(sensorValue1);
  
  

  delay(1000);                // wait for a second
               // wait for a second

}
