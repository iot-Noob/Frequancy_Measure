/* FreqCount - Example with serial output
 * http://www.pjrc.com/teensy/td_libs_FreqCount.html
 *
 * This example code is in the public domain.
 */
#include <FreqCount.h>
 
//Pin is 5 
void setup() {
  Serial.begin(9600);
  FreqCount.begin(1000);
  Serial.println("Frequancy measure oline");
}
double khz,mhz,tmp,t2;
void loop() {
  
  if (FreqCount.available()) {
    unsigned long count = FreqCount.read();
    if(count>=0&&count<=1000){
       Serial.print(count);
       Serial.print(" Hz");
       Serial.println();
    } else if(count>=1000&&count<=1000000){
      khz=(count/1000);
      Serial.print(khz);
       Serial.print(" KHz");
       Serial.println();
    } else{
      tmp=pow(10,6);
       t2=1*tmp;
       mhz=(count/t2);
      
          Serial.print(mhz);
       Serial.print(" MHz");
       Serial.println();
    }
   
  }
}
