#include <stdio.h>

int main() {

    int a, b;
    char choice;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nChoose an operation:\n");
    printf("+. Addition\n");
    printf("-. Subtraction\n");
    printf("*. Multiplication\n");
    printf("/. Division\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch (choice) {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}