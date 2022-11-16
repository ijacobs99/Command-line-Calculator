#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Declaring Binary function 

    void binary(char option) {

        char operation; 
        float num1, num2, result; 

        printf("Please enter the first number: "); 
        scanf("%f", &num1); 
        printf("Please enter an operator ( + , - , * , / ): ");
        scanf("%s", &operation);
        printf("Please enter the second number: "); 
        scanf("%f", &num2);

        switch (operation)
        {
        case '+': // addition case
            result = num1 + num2;
            printf("The result is: %f\n", result);
            break;
        case '-': // subtraction case 
            result = num1 - num2;
            printf("The result is: %f\n", result);
            break;
        case '*': // multiplication case
            result = num1 * num2;
            printf("The result is: %f\n", result);
            break;
        case '/': // division case 
            result = num1 / num2;
            printf("The result is: %f\n", result);
            break;
        case '%': // remainder case 
            result = remainder(num1,num2);
            printf("The result is: %f\n", result);
            break;
        case 'P': // power case 
            result = pow(num1, num2);
            printf("The result is: %f\n", result);
            break;
        case 'X': // maximum case 
            if (num1 < num2)
            print("%f is greater than %f\n", num2, num1);
            break;
        case 'I': // minimum case
            if (num1 > num2)
            print("%f is less than %f\n", num1, num2);
            break;
        default:
            break;
        }
    }

// Declaring Unary function 
void unary(char option) {
    char operation; 
    float num1, result; 

    printf("Please enter a number: "); 
    scanf("%f", &num1); 
    printf("Please enter an operator ( S, L, E, C, F): ");
    scanf("%s", &operation);

    switch (operation)
    {
    case 'S': //square root case
        result = sqrt(num1);
        printf("The result is: %f\n", result);
        break;
    case 'L': // log case
        result = log(num1);
        printf("The result is: %f\n", result);
        break;
    case 'E': // exponentiation case
        result = exp(num1);
        printf("The result is: %f\n", result);
        break;
    case 'C': // ceiling case
        result = ceil(num1);
        printf("The result is: %f\n", result);
        break;
    case 'F': // floor case 
        result = floor(num1);
        printf("The result is: %f\n", result);
        break;
    default:
        break;
    }

}

// Declaring Advances function 

// Declaring Variables function
void variableDeclaration(option) {
    char var;
    float num1, result;

    printf("Please enter a variable (a -e): \n");
    scanf("%s", &var);
    printf("Please enter a number: \n");
    scanf("%f", &num1);

}

// Declaring End function
void end(option) {
    return printf("Thanks for using my Simple Calculator. Hope to see you again soon. Goodbye!\n");
}


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
            (binary(option));
        }
        // if user selections option (U)
        else if (option == 'U') {
            (unary(option));
        } 
        // if user selections option (A)
        else if (option == 'A') {
            printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n");
        } 
        // if user selections option (V)
        else if (option == 'V') {
            (variableDeclaration(option));
        } 
        // if user selections option (E)
        else if (option =='E') {
            break;
        }
        // User Selection
        printf("\n");
        printf("Please select your option (B, U, A, V, E)\n");
        scanf(" %c", &option);
    }

    return 0;
}