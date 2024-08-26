// Header and library files provide a set of predefined functions to do different common tasks
#include <stdio.h>
// Creates an int function that uses a pointer to determine the length of the string
int determineLength(const char* sta) {
    // Put the pointer at the beginning of the string
    const char *ptr = sta;
    // Iterate through the characters until the end of the string
    while (*ptr) {
        // Move the pointer one position
        ptr++;
    }
    // Calculate the length by subtracting the initial pointer position from the final position
    int length = ptr - sta;
    // Return the length of the string
    return length;
}
// This is the main function which will be executed when the program runs
int main() {
    // Creates a variable called string of type char of maximum length 100
    char string[100];
    // Asks the user to type their string
    printf("Enter string:\n");
    // Get and saves the string the user types
    scanf("%s", string);
    // Calculates the length of the string
    int measure = determineLength(string);
    // Prints the length of the string
    printf("%d", measure);
    // Indicates the program has run successfully 
    return 0;
}