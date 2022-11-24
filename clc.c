#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

//Declaring Selction function 
char selection(option) {
    int catch = 1; 
    while (catch == 1) {
        //capitalize input for userSelection
        option = toupper(option);

        if (option == 'B' || option == 'U' || option == 'A' || option == 'V' || option == 'E') {
            catch = 0;
        }
        else {
            // invalid input case | ask user to select valid input
            char option;
            printf("Please enter a valid option (B, U, V, A, E): ");
            scanf("%c", &option);
            catch = 1;
        }
    }

    return(option);
}

// Declaring Binary function 
    float binary(option) {

        char operation; 
        float num1, num2, result, catch = 1; 

        printf("Please enter the first number: "); 
        while (scanf("%f", &num1) == 0) {
            printf("Invalid input. Please enter floating point number: ");
            scanf(" %f", &num1);
        }
        printf("Please enter an operator (+ , - , * , /, %%, P, X, I): ");
        scanf("%s", &operation);

        printf("Please enter the second number: "); 
        while (scanf("%f", &num2) == 0) {
            printf("Invalid input. Please enter floating point number: ");
            scanf(" %f", &num2);
        }

        while (catch == 1) {
            switch (operation)
            {
            case '+': // addition case
                result = num1 + num2;
                catch = 0;
                break;
            case '-': // subtraction case 
                result = num1 - num2;
                catch = 0;
                break;
            case '*': // multiplication case
                result = num1 * num2;
                catch = 0;
                break;
            case '/': // division case 
                if (num2 == 0) {
                    printf("Please enter a non-zero number: \n");
                    scanf("%f", &num2);
                }
                result = num1 / num2;
                catch = 0;
                break;
            case '%': // remainder case 
                result = remainder(num1,num2);
                catch = 0;
                break;
            case 'P': // power case 
                result = pow(num1, num2);
                catch = 0;
                break;
            case 'X': // maximum case 
                result = fmax(num1, num2);
                catch = 0;
                break;
            case 'I': // minimum case
                result = fmin(num1, num2);
                catch = 0;
                break;
            default:
                printf("Please enter a valid operator (+ , - , * , /, %%, P, X, I): ");
                scanf(" %c", &operation);
                catch = 1; 
                break;
            }
        }

        return result;
    }

// Declaring Unary function 
float unary(option) {
    char operation; 
    float num1, result, catch = 1; 

    printf("Please enter a number: "); 
    while (scanf("%f", &num1) == 0) {
        printf("Invalid input. Please enter floating point number: ");
        scanf(" %f", &num1);
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
            catch = 0;
            break;
        case 'L': // log case
            result = log(num1);
            catch = 0;
            break;
        case 'E': // exponentiation case
            result = exp(num1);
            catch = 0;
            break;
        case 'C': // ceiling case
            result = ceil(num1);
            catch = 0;
            break;
        case 'F': // floor case 
            result = floor(num1);
            catch = 0;
            break;
        default:
            printf("Please enter a valid operator (S, L, E, C, F): ");
            scanf(" %c", &operation);
            catch = 1;
            break;
        }
    }

    return result;

}

// Declaring Variables function 
float variableDeclaration(option) {
    char varName; 
    float a = 0, b = 0, c = 0, d = 0, e = 0, num, catch = 1; 

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
                    return a;
                case 'b':
                    b = num;
                    printf("Variable b is set to: %.2f\n", b);
                    catch = 0;
                    return b;
                case 'c':
                    c = num;
                    printf("Variable c is set to: %.2f\n", c);
                    catch = 0;
                    return c;
                case 'd':
                    d = num;
                    printf("Variable d is set to: %.2f\n", d);
                    catch = 0;
                    return d;
                case 'e':
                    e = num;
                    printf("Variable e is set to: %.2f\n", e);
                    catch = 0;
                    return e;
                default:
                    printf("Invalid variable name. Please choose a characater between 'a' and 'e': ");
                    scanf(" %c", &varName);
                    catch = 1;
            }
        }

        return 0;
}

// Declaring End function
void end(option) {
    printf("Thanks for using my Simple Calculator. Hope to see you again soon. Goodbye!\n");
}

//Declaring Advanced Binary function  
float advancedBinary(option) {
    char choice, operation; 
    float variable1, variable2, result = 0, catch = 1; 

    printf("Would you like to enter a variable or a number (V or N): ");
    scanf("%s", &choice);
    choice = toupper(choice);

    if (choice == 'V') {
        variable1 = (variableDeclaration(option));
        printf("Please enter an operator (+ , - , * , /, %%, P, X, I): ");
        scanf("%s", &operation);
        variable2 = (variableDeclaration(option));

        while (catch == 1) {
            switch (operation)
            {
            case '+': // addition case
                result = variable1 + variable2;
                catch = 0;
                break;
            case '-': // subtraction case 
                result = variable1 - variable2;
                catch = 0;
                break;
            case '*': // multiplication case
                result = variable1 * variable2;
                catch = 0;
                break;
            case '/': // division case 
                if (variable1 == 0) {
                    printf("Please enter a non-zero number: \n");
                    scanf("%f", &variable2);
                }
                result = variable1 / variable2;
                catch = 0;
                break;
            case '%': // remainder case 
                result = remainder(variable1,variable2);
                catch = 0;
                break;
            case 'P': // power case 
                result = pow(variable1, variable2);
                catch = 0;
                break;
            case 'X': // maximum case 
                result = fmax(variable1, variable2);
                catch = 0;
                break;
            case 'I': // minimum case
                result = fmin(variable1, variable2);
                catch = 0;
                break;
            default:
                printf("Please enter a valid operator (+ , - , * , /, %%, P, X, I): ");
                scanf(" %c", &operation);
                catch = 1; 
                break;
            }
        }
        return result;
    }
    else if ( choice == 'N') {
        result = binary(option);
        return result;
    }

    return result;

}

//Declaring Advanced Unary function 
float advancedUnary(option) { 
    char choice, operation; 
    float variable, result = 0, catch = 1; 

    printf("Would you like to enter a variable or a number (V or N): ");
    scanf("%s", &choice);
    choice = toupper(choice);

        if (choice == 'V') {
            variable = (variableDeclaration(option));
            printf("Please enter an operator (S, L, E, C, F): ");
            scanf("%s", &operation);

            while (catch == 1) {
                switch (operation) {
                    case 'S': //square root case
                        if (variable < 0) {
                            printf("Please enter a positive number: ");
                            scanf("%f", &variable);
                        }
                        result = sqrt(variable);
                        catch = 0;
                        break;
                    case 'L': // log case
                        result = log(variable);
                        catch = 0;
                        break;
                    case 'E': // exponentiation case
                        result = exp(variable);
                        catch = 0;
                        break;
                    case 'C': // ceiling case
                        result = ceil(variable);
                        catch = 0;
                        break;
                    case 'F': // floor case 
                        result = floor(variable);
                        catch = 0;
                        break;
                    default:
                        printf("Please enter a valid operator (S, L, E, C, F): ");
                        scanf(" %c", &operation);
                        catch = 1;
                        break;
                }  
            }

            return result;
        }

        else if (choice == 'N') {
            result = (unary(option));
            return result; 

        }

    return result;
}

//main function 
int main(void)
{
    // Welcome message 
    printf("\n");
    printf("Welcome to my Command-Line Calculator (CLC)\nDeveloper: Isabel Jacobs\nVersion: 2\nDate: November 30, 2022\n------------------------------------------\n");

    // Varibale initialization  
    char option;
    float result;
    int catch = 1;

    // User selection with messgae 
    printf("\nSelect one of the following items:\n");
    printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
    printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
    printf("A) - Advances Mathematical Operations, using variables, arrays.\n");
    printf("V) - Define variables and assign them values.\n");
    printf("E) - Exit\n");
    scanf("%c", &option);
    option = selection(option);

    while (catch == 1) {
        switch(option) {
            case 'B': // Binary case
                result = (binary(option));
                printf("The result is: %.2f\n", result);
                catch = 1;
                break;
            case 'U': // Unary case
                result = (unary(option));
                printf("The result is: %.2f\n", result);
                catch = 1;
                break;
            case 'V': // Variable case
                (variableDeclaration(option));
                catch = 1;
                break;
            case 'A': // Advance case
                printf("Please choose B, U, or E: \n");
                scanf("%s", &option);
                option = toupper(option);

                if (option == 'B') { // if advanced binary 
                    result = (advancedBinary(option));
                    printf("The result is: %.2f\n", result);
                    catch = 1;
                }
                else if (option == 'U') { // if advanced unary 
                    result = (advancedUnary(option));
                    printf("The result is: %.2f\n", result);
                    catch = 1;
                }
                else if (option == 'E') { // if exit 
                    catch = 0;
                }
                break;
            case 'E': // Exit case
                catch = 0;
                break;
        }

        // call Exit function 
        if (option == 'E') { 
            (end(option));
        }
        // call Selection function 
        else {
        printf("\n");
        printf("Please select your option (B, U, A, V, E): ");
        scanf(" %c", &option);
        option = selection(option);
        }
    }


    return 0;
}