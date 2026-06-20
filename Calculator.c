# CodeAlpha_Calculator-program
A simple C Calculator Program built as part of the CodeAlpha Internship to perform basic arithmetic operations efficiently using switch-case and user interaction.
#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("Calculator Program\n");

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\n\nChoose operation: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            result = a + b;
            printf("Result = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2f", result);
            break;

        case 4:
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Cannot divide by zero");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
