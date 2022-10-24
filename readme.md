# Frequancy measure Using Arduino
 
##### _Version 1.0 BY IoT Noob_ 

A code that read frequancy pwm and display the output on arduino which you can use it to display on wether screen or some wireless device.

 

- Library path and folder
### copy the file to 
```bat
C:\Users\Admin\Documents\Arduino\libraries
```
1. Include the library in yor main arduino project

```c++
#include <FreqCount.h>
```
This tells the compiler of current library you want to use i.e. Frequancy counter in this case.
### Initilize the code
In your ``` void begin()``` part of of arduino you should initilise the library.
```c++
  Serial.begin(9600); //to initilize the Serial port in arduino
  FreqCount.begin(1000); //to ini frequancy library
```
Here  ``` PIN 5 ```   is use to read frequancy but for more [Go to read the documentation](https://www.pjrc.com/teensy/td_libs_FreqCount.html) for more informaion about this library.
also [Download Library](https://www.arduino.cc/reference/en/libraries/freqcount/) 

 _made by IoT Noob V1_
 _2022_