#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Declaring Binary function 
    void binary(option) {

        char operation; 
        float num1, num2, result, catch = 1; 

        printf("Please enter the first number: "); 
        while (scanf("%f", &num1) == 0) {
            printf("Invalid input. Please enter floating point number: ");
            scanf("%*s");
        }
        printf("Please enter an operator (+ , - , * , /, %%, P, X, I): ");
        scanf("%s", &operation);

        printf("Please enter the second number: "); 
        while (scanf("%f", &num2) == 0) {
            printf("Invalid input. Please enter floating point number: ");
            scanf("%*s");
        }

        while (catch == 1) {
            switch (operation)
            {
            case '+': // addition case
                result = num1 + num2;
                printf("The result is: %.2f\n", result);
                catch = 0;
                break;
            case '-': // subtraction case 
                result = num1 - num2;
                printf("The result is: %.2f\n", result);
                catch = 0;
                break;
            case '*': // multiplication case
                result = num1 * num2;
                printf("The result is: %.2f\n", result);
                catch = 0;
                break;
            case '/': // division case 
                if (num2 == 0) {
                    printf("Please enter a non-zero number: \n");
                    scanf("%f", &num2);
                }
                result = num1 / num2;
                printf("The result is: %.2f\n", result);
                catch = 0;
                break;
            case '%': // remainder case 
                result = remainder(num1,num2);
                printf("The result is: %.2f\n", result);
                catch = 0;
                break;
            case 'P': // power case 
                result = pow(num1, num2);
                printf("The result is: %.2f\n", result);
                catch = 0;
                break;
            case 'X': // maximum case 
                result = fmax(num1, num2);
                printf("The result is %.2f\n", result);
                catch = 0;
                break;
            case 'I': // minimum case
                result = fmin(num1, num2);
                printf("The result is %.2f\n", result);
                catch = 0;
                break;
            default:
                printf("Please enter a valid operator (+ , - , * , /, %%, P, X, I): ");
                scanf(" %c", &operation);
                catch = 1; 
                break;
            }
        }
    }

// Declaring Unary function 
void unary(option) {
    char operation; 
    float num1, result, catch = 1; 

    printf("Please enter a number: "); 
    while (scanf("%f", &num1) == 0) {
        printf("Invalid input. Please enter floating point number: ");
        scanf("%*s");
    } 
    printf("Please enter an operator (S, L, E, C, F): ");
    scanf("%s", &operation);

    while (catch == 1) {
        switch (operation)
        {
        case 'S': //square root case
            if (num1 < 0) {
                printf("Please enter a positive number: ");
                scanf("%f", &num1);
            }
            result = sqrt(num1);
            printf("The result is: %.2f\n", result);
            catch = 0;
            break;
        case 'L': // log case
            result = log(num1);
            printf("The result is: %.2f\n", result);
            catch = 0;
            break;
        case 'E': // exponentiation case
            result = exp(num1);
            printf("The result is: %.2f\n", result);
            catch = 0;
            break;
        case 'C': // ceiling case
            result = ceil(num1);
            printf("The result is: %.2f\n", result);
            catch = 0;
            break;
        case 'F': // floor case 
            result = floor(num1);
            printf("The result is: %.2f\n", result);
            catch = 0;
            break;
        default:
            printf("Please enter a valid operator (S, L, E, C, F): ");
            scanf(" %c", &operation);
            catch = 1;
            break;
        }
    }

}

// Declaring Variables function
/** 
void variableDeclaration(option) {
    char varName;
    float num, a = 0, b = 0, c = 0, d = 0, e = 0;

    printf("Please enter the name of the variable ( A single character between 'a' to 'e' ): ");
    scanf("%s", &varName);
    printf("Please enter a value to assign to the variable: ");
    scanf("%f", &num);

    if (varName == 'a') {
        a = num;
        printf("Variable a is set to: %.2f\n", a);
    }
    else if (varName == 'b') {
        b = num;
        printf("Variable b is set to: %.2f\n", b);
    }
    else if (varName == 'c') {
        c = num;
        printf("Variable c is set to: %.2f\n", c);
    }
    else if (varName == 'd') {
        d = num;
        printf("Variable d is set to: %.2f\n", d);
    }
    else if (varName == 'e') {
        e = num;
        printf("Variable e is set to: %.2f\n", e);
    }
}
*/

// Declaring End function
void end(option) {
    printf("Thanks for using my Simple Calculator. Hope to see you again soon. Goodbye!\n");
}

// Declaring Advances function
void advances(option) {
    char userSelection;
    printf("Please choose B, U, or E: \n");
    scanf("%s", &userSelection);

    if (userSelection == 'B') {
        (binary(option));
    }
    else if (userSelection == 'U') {
        (unary(option));
    }
    else if (userSelection == 'E') {
        (end(option));
    }

}

int main(void)
{
    // Welcome message | Dislays the string inside quotations
    printf("\n");
    printf("Welcome to my Command-Line Calculator (CLC)\nDeveloper: Isabel Jacobs\nVersion: 2\nDate: November 18, 2022\n------------------------------------------\n");

    // Varibale initialization  
    char option; 

    // User selection with messgae 
    printf("\nSelect one of the following items:\n");
    printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
    printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
    printf("A) - Advances Mathematical Operations, using variables, arrays.\n");
    printf("V) - Define variables and assign them values.\n");
    printf("E) - Exit\n");
    printf("\n");
    scanf("%c", &option);

    while (option == 'B' || option == 'U' || option == 'A' || option == 'V' || option == 'E') {    
        // If user selects option (B) 
        if (option == 'B') {
            (binary(option));
        }
        // if user selections option (U)
        else if (option == 'U') {
            (unary(option));
        } 
        // if user selections option (A)
        else if (option == 'A') {
            (advances(option));
        } 
        // if user selections option (V)
        else if (option == 'V') {
            char varName;
            float num, a = 0, b = 0, c = 0, d = 0, e = 0, catch = 1;

            printf("Please enter the name of the variable (A single character between 'a' to 'e'): ");
            scanf("%s", &varName);
            printf("Please enter a value to assign to the variable: ");
            scanf("%f", &num);

            while (catch == 1) {
                switch (varName) {
                    case 'a':
                        a = num;
                        printf("Variable a is set to: %.2f\n", a);
                        catch = 0;
                        break;
                    case 'b':
                        b = num;
                        printf("Variable b is set to: %.2f\n", b);
                        catch = 0;
                        break;
                    case 'c':
                        c = num;
                        printf("Variable c is set to: %.2f\n", c);
                        catch = 0;
                        break;
                    case 'd':
                        d = num;
                        printf("Variable d is set to: %.2f\n", d);
                        catch = 0;
                        break;
                    case 'e':
                        e = num;
                        printf("Variable e is set to: %.2f\n", e);
                        catch = 0;
                        break;
                    default:
                        printf("Invalid variable name. Please choose a characater between 'a' and 'e': ");
                        scanf(" %c", &varName);
                        catch = 1;
                }

            }
        } 
        // if user selections option (E)
        else if (option =='E') {
            (end(option));
            break;
        }
        // User Reselection
        printf("\n");
        printf("Please select your option (B, U, A, V, E): ");
        scanf(" %c", &option);
    }

    return 0;
}