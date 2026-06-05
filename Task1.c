#include <stdio.h>

int main()
{
    float num1, num2;
    char choice;

    printf("===== CALCULATOR =====\n");

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nChoose Operation\n");
    printf("+ for Addition\n");
    printf("- for Subtraction\n");
    printf("* for Multiplication\n");
    printf("/ for Division\n");

    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch(choice)
    {
        case '+':
            printf("Result = %.2f", num1 + num2);
            break;

        case '-':
            printf("Result = %.2f", num1 - num2);
            break;

        case '*':
            printf("Result = %.2f", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Division by zero not possible");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}