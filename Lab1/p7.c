// Header and library files provide a set of predefined functions to do different common tasks
#include <stdio.h>
// Creates an int function that uses a pointer to calculate the expression
int calculator(char* expression) {
    // Creates a variable called a of type int
    int a;
    // Creates a variable called b of type int
    int b;
    // Creates a variable called answer of type int
    int answer;
    // Creates a variable called operation of type char
    char operation;
    // Through sscanf, extract the values for a, b, and operation
    sscanf(expression, "(%d%c%d)^2", &a, &operation, &b);
    // If the operation is addition, this statement will run
    if (operation == '+') {
        // Calculates the answer to the expression
        answer = (a+b) * (a+b);
        // Otherwise if the operation is subtraction, this statement will run
        } else if (operation == '-') {
            // Calculates the answer to the expression
            answer = (a-b) * (a-b);
        }
        // Returns the answer to the expression
        return answer;
}
// This is the main function which will be executed when the program runs
int main() {
    // Creates a variable called expression of type char of maximum length 100
    char expression[100];
    // Asks the user to type their expression
    printf("Enter expression:\n");
    // This reads the input and stores it in the array
    fgets(expression, sizeof(expression), stdin);
    // Calculates the result
    int result = calculator(expression);
    // Prints the result
    printf("%d", result);
    // Indicates the program has run successfully 
    return 0;
}
