#include <stdint.h>

#include "eecs388_lib.h"

/*
  
  
   Task 1.4: Build and deploy/upload the code as is
   
   Task 1.5: Try out debugging. See lab sheet. 
   
   Task 2.1: Review the files eecs388_lib.h and eecs388_lib.c. On vscode, it will usually be on the file browser pane on the left

   Task 2.2: Implement RGB blinky. 

   - set red, green, and blue LEDs for output mode, using the gpio_mode() function
   - in the main loop, turn on/off a different LED at each iteration. 
      for example, 
      at 1st iteration
         turn on RED led
	      delay 500 ms 
	      turn off RED led
	      delay 300 ms.
	   at 2nd iteration
	      do the same but for GREEN led
	   at 3rd iteration
	      do the same but for BLUE led
	   at 4th iteration
	      back to RED led. 
	   ...
   
   - for extra marks, modify your code so that it also flashes the WHITE color
      so sequence would be something like this: RED -> BLUE -> GREEN -> WHITE
*/

int main()
{
   int gpio_red = RED_LED;
   int gpio_blue = BLUE_LED;
   int gpio_green = GREEN_LED; //GREEN_LED is a macro. It is essentially a placeholder that is replaced by the compiler during compilation into the correct pin number
                         //To see the actual pin numbers, look for GREEN_LED (or the other colors) in the eecs388_lib.h file

   gpio_mode(gpio_red, OUTPUT);
   gpio_mode(gpio_blue, OUTPUT);
   gpio_mode(gpio_green, OUTPUT); //this function sets the pin referred to by the variable gpio to act as an OUTPUT pin, i.e. send signals out of it

   // Your code will need to be inside this while loop
   // but feel free to do it any other way if you like. As long the expected behaviour is present, you will be credited
   
   while(1)
   {
      gpio_write(gpio_red, ON);
      delay(500);
      gpio_write(gpio_red, OFF);
      delay(300);
      gpio_write(gpio_green, ON); // the gpio_write() function sets a pin (referred to by gpio in this case) to the logic high or ON state.
                            // you could also think of it as switching on a pin so that it's now sending out a signal
      delay(500);          // this function asks the processor to just do nothing and wait for 1000 milliseconds (1 sec)
      gpio_write(gpio_green, OFF); // same as before, but this time we are setting the pin to logi low or OFF state. Same as turning the pin off
      delay(300);
      gpio_write(gpio_blue, ON);
      delay(500);
      gpio_write(gpio_blue, OFF);
      delay(300);
      gpio_write(gpio_red, ON);
      gpio_write(gpio_blue, ON);
      gpio_write(gpio_green, ON);
      delay(500);
      gpio_write(gpio_red, OFF);
      gpio_write(gpio_blue, OFF);
      gpio_write(gpio_green, OFF);
      delay(300);
   }
}
