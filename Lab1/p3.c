// Header and library files provide a set of predefined functions to do different common tasks
#include <stdio.h>
// This allows the use of boolean data types
#include <stdbool.h>
// Creates a boolean function to determine if a number is prime
bool determinePrime(int value1) {
    // Checks if the number entered is less than or equal to 1
    if (value1 <= 1) {
        // If the number entered is less than or equal to 1, the number is not prime
        return false;
    // Checks if the nunber entered is equal to 2
    } else if (value1 == 2) {
        // If the number entered is equal to 2, the number is prime
        return true;
    }
    // Checks if the number entered is prime from 2 to n-1
    for (int value2 = 2; value2 < value1; value2++) {
        // If this case is true, the number is not prime
        if (value1 % value2 == 0) {
            // Returns false to indicate the number is not prime
            return false;
        }
    }
    // Returns true to indicate the number is prime
    return true;
}
// This is the main function which will be executed when the program runs
int main() {
    // Creates a variable called number of type int
    int number;
    // Asks the user to type a number
    printf("Enter a number:\n");
    // Get and saves the number the user types
    scanf("%d", &number);
    // Iterates through every number from 0 until the entered number
    for (int value = 0; value <= number; value++) {
        // If the number is a prime number, it will be printed
        if (determinePrime(value)) {
        // Prints a list of the numbers that are prime
        printf("%d ", value);
        }
    }
    // Indicates the program has run successfully 
    return 0;
}