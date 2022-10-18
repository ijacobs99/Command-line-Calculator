
#include <stdio.h>

int main(void)
{
    // Welcome message | Dislays the string inside quotations
    printf("\n");
    printf("Welcome to my Command-Line Calculator (CLC)\nDeveloper: Isabel Jacobs\nVersion: 1\nDate: October 21, 2021\n------------------------------------------\n");

    // Define 
    char option, operation, result; 
    int num1, num2; 

    // User selection 
    printf("\nSelect one of the following items:\n");
    printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
    printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
    printf("A) - Advances Mathematical Operations, using variables, arrays.\n");
    printf("V) - Define variables and assign them values.\n");
    printf("E) - Exit\n");
    printf("\n");
    scanf("%c", &option);

    // If user selects option (B) | User input; 2 numbers and operation (+,-,*,/)
    if (option == 'B') {
        printf("\n");
        printf("Please enter the first number: "); 
        scanf("%d", &num1); 
        printf("Please enter your operation ( + , - , * , / )\n");
        scanf("%s", &operation);
        printf("Please enter the second number: "); 
        scanf("%d", &num2);
            // if addition, sum will be printed 
            if (operation == '+') {
                result = num1 + num2;
                printf("Your result is: %d\n", result);
            }
            // subtraction, difference will be printed 
            else if (operation == '-') {
                result = num1 - num2;
                printf("Your result is: %d\n", result);
            }
            // multiplication, product wil be printed 
            else if (operation == '*') {
                result = num1 * num2;
                printf("Your result is: %d\n", result);
            }
            // division, quotient will be printed 
            else if (operation == '/') {
                result = num1 / num2;
                printf("Your result is: %d\n", result);
            }
    }
    // if user selections option (U)
    else if (option == 'U') {
        printf("\nSorry, at this time I don't have enough knowledge to serve you in this category.\n");
    } 
    // if user selections option (A)
    else if (option == 'A') {
        printf("\nSorry, at this time I don't have enough knowledge to serve you in this category.\n");
    } 
    // if user selections option (V)
    else if (option == 'V') {
        printf("\nSorry, at this time I don't have enough knowledge to serve you in this category.\n");
    } 
    // if user selections option (E)
    else if (option =='E') {
        printf("\nThanks for using my Simple Calculator. Hope to see you again soon. Goodbye!\n");
    }

    return 0;
}
