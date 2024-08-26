// Header and library files provide a set of predefined functions to do different common tasks
#include <stdio.h>
// This library allows for the use of the NULL macro and strtol
#include <stdlib.h>
// This is the main function which will be executed when the program runs
int main() {
    // Creates a variable called answer of type char
    char answer;
    // Creates an array of type char with 32 slots
    char binaryInput[32];
    // Creates a variable called hexInput of type int
    int hexInput;
    // Creates a variable called result of type int
    int result; 
    // Asks the user to select between either conversion method
    printf("Do you want binary-to-hex or hex-to-binary?\n");
    // Get and saves the letter the user types
    scanf("%c", &answer);
    // If the user enters h (for hex-to-binary), this will run
    if (answer == 'h') {
        // Asks the user for a hex number
        printf("Please enter a hex number:\n");
        // Get and saves the number the user types
        scanf("%x", &hexInput);
        // This loops through the binaryInput array to find each value
        for (int value = 31; value >= 0; value--) {
            // This will assign the remainder to the value index
            binaryInput[value] = hexInput%2;
            // Divides the hexInput by 2
            hexInput = hexInput/2;
        }
        // This will print the binary number
        for (int value = 0; value < 32; value++) {
            //Prints the binary number
            printf("%d", binaryInput[value]);
        }
    // If the user enters b (for binary-to-hex), this will run
    } else if (answer == 'b') {
        // Asks the user for a binary number
        printf("Please enter a bin number:\n");
        // Get and saves the number the user types
        scanf("%s", binaryInput);
        // This will make the input string a decimal, converting by base 2
        result = strtol(binaryInput, NULL, 2);
        // This will print the resulting hex number
        printf("%x", result);
    }
    // Indicates the program has run successfully 
    return 0;
}