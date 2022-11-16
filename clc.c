#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Declaring Binary function 

    void binary() {

        char operation; 
        int num1, num2, result; 

        printf("Please enter the first number: "); 
        scanf("%d", &num1); 
        printf("Please enter an operator ( + , - , * , / ): ");
        scanf("%s", &operation);
        printf("Please enter the second number: "); 
        scanf("%d", &num2);

        switch (operation)
        {
        case '+': // addition case
            result = num1 + num2;
            printf("The result is: %d\n", result);
            break;
        case '-': // subtraction case 
            result = num1 - num2;
            printf("The result is: %d\n", result);
            break;
        case '*': // multiplication case
            result = num1 * num2;
            printf("The result is: %d\n", result);
            break;
        case '/': // division case 
            result = num1 / num2;
            printf("The result is: %d\n", result);
            break;
        case '%': // remainder case 
            result = num1 % num2;
            printf("The result is: %d\n", result);
            break;
        case 'P': // power case 
            result = pow(num1, num2);
            printf("The result is: %d\n", result);
            break;
        case 'X': // maximum case 
            if (num1 < num2)
            print("%d is greater than %d\n", num2, num1);
            break;
        case 'I': // minimum case
            if (num1 > num2)
            print("%d is less than %d\n", num1, num2);
            break;
        default:
            break;
        }
    }

// Declaring Unary function 

// Declaring Advances function 

// Dec;aring Variables function 

int main(void)
{
    // Welcome message | Dislays the string inside quotations
    printf("\n");
    printf("Welcome to my Command-Line Calculator (CLC)\nDeveloper: Isabel Jacobs\nVersion: 1\nDate: October 21, 2021\n------------------------------------------\n");

    // Varibale initialization  
    char option, operation; 
    int num1, num2, result; 

    // User selection with messgae 
    printf("\nSelect one of the following items:\n");
    printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
    printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
    printf("A) - Advances Mathematical Operations, using variables, arrays.\n");
    printf("V) - Define variables and assign them values.\n");
    printf("E) - Exit\n");
    printf("\n");
    scanf("%c", &option);
    
    while (option == 'B' || option == 'U' || option == 'A' || option == 'V' || option == 'E')
    {    
        // If user selects option (B) | User input; 2 numbers and operation (+,-,*,/)
        if (option == 'B') {
            (binary());
        }
        // if user selections option (U)
        else if (option == 'U') {
            printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n");
        } 
        // if user selections option (A)
        else if (option == 'A') {
            printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n");
        } 
        // if user selections option (V)
        else if (option == 'V') {
            printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n");
        } 
        // if user selections option (E)
        else if (option =='E') {
            printf("Thanks for using my Simple Calculator. Hope to see you again soon. Goodbye!\n");
            break;
        }
        // User Selection
        printf("\n");
        printf("Please select your option (B, U, A, V, E)\n");
        scanf(" %c", &option);
    }

    return 0;
}