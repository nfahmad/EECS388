// Header and library files provide a set of predefined functions to do different common tasks
#include <stdio.h>
// Creates an int function to determine how many duplicate numbers there are
int determineDuplicates(int arr[], int size) {
    // Creates a variable called count of type int
    int count = 0;
    // This will iterate through each element in the array
    for (int value1 = 0; value1 < size; ++value1) {
        // This will check if the current element is already in the array
        for (int value2 = value1 + 1; value2 < size; ++value2) {
            // If there is a duplicate, the count increases
            if (arr[value1] == arr[value2]) {
                // Increases the count by 1
                count++;
                // Ends the processing for this statement
                break;
            }
        }
    }
    // Returns the number of duplicates
    return count;
}
// This is the main function which will be executed when the program runs
int main() {
    // Creates a variable called size of type int
    int size;
    // Asks the user to type the size of their array
    printf("How big is the array?\n");
    // Get and saves the number the user types
    scanf("%d", &size);
    // Creates an array of type int with the inputted size
    int arr[size];
    // This will run for the length of the array's size and will repeat after every entered element
    for (int element = 0; element < size; ++element) {
        // Asks the user to type the element into their array and adjusts the element per input
        printf("Enter element %d:\n", element + 1);
        // Get and saves the element the user types into the array
        scanf("%d", &arr[element]);
    }
    // Creates a variable called countDuplicates of type int. This will run the determineDuplicates function
    int countDuplicates = determineDuplicates(arr, size);
    // Prints the number of duplicates
    printf("%d", countDuplicates);
    // Indicates the program has run successfully 
    return 0;
}
