// Header and library files provide a set of predefined functions to do different common tasks
#include <stdio.h>
// This is the main function which will be executed when the program runs
int main() {
    // Creates a variable called firstOperand of type int
    int firstOperand;
    // Creates a variable called operation of type char
    char operation;
    // Creates a variable called secondOperand of type int
    int secondOperand;
    // Creates a variable called answer of type int
    int answer;
    // Asks the user to type the first operand
    printf("Enter 1st operand:\n");
    // Get and saves the number the user types
    scanf("%d", &firstOperand);
    // Asks the user to type the operation
    printf("Enter operation:\n");
    // Get and saves the operation the user types
    scanf(" %c", &operation);
    // If the operation the user types is s, then the first operand will be squared
    if (operation == 's') {
        // This attaches the variable created earlier (answer) to the squared value
        answer = firstOperand * firstOperand;
    } else {
        // Asks the user to type the second operand
        printf("Enter 2nd operand:\n");
        // Get and saves the number the user types
        scanf("%d", &secondOperand);
        // If the operation the user types is +, -, *, or / the switch block will act accordingly
        switch (operation) {
            // If the user types + for their operation, this case will run
            case '+':
                // This attaches the variable created earlier (answer) to the sum value
                answer = firstOperand + secondOperand;
                // Ends the processing for this statement
                break;
            // If the user types - for their operation, this case will run
            case '-':
                // This attaches the variable created earlier (answer) to the difference value
                answer = firstOperand - secondOperand;
                // Ends the processing for this statement
                break;
            // If the user types * for their operation, this case will run
            case '*':
                // This attaches the variable created earlier (answer) to the product value
                answer = firstOperand * secondOperand;
                // Ends the processing for this statement
                break;
            // If the user types / for their operation, this case will run
            case '/':
                // This attaches the variable created earlier (answer) to the quotient value
                answer = firstOperand / secondOperand;
                // Ends the processing for this statement
                break;
        }
    }
    // Prints the answer to the operation the user typed in
    printf("%d\n", answer);
    // Indicates the program has run successfully 
    return 0;
}
