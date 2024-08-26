// Header and library files provide a set of predefined functions to do different common tasks
#include <stdio.h>
// This is the main function which will be executed when the program runs
int main() {
    // Creates a variable called weight of type int
    int weight;
    // Creates a variable called light of type int
    int light = 10000;
    // Creates a variable called medium of type int
    int medium = 26000;
    // Creates a variable called heavy of type int
    int heavy = 26001;
    // Get and saves the number the user types
    scanf("%d", &weight);
    // If the weight falls into the category of light duty, this will run
    if (weight < light) {
        // Prints the indiciation for light duty
        printf("l");
    // If the weight falls into the category of medium duty, this will run
    } else if (weight < medium) {
        // Prints the indiciation for medium duty
        printf("m");
    // If the weight falls into the category of heavy duty, this will run
    } else {
        // Prints the indiciation for heavy duty
        printf("h");
    }
    // Indicates the program has run successfully 
    return 0;
}