#include <stdio.h>

int main(){

    int a;
    int b;
    int choice;

    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf("%d", &b);

    printf("enter your choice from these followings: ");
    printf("1. Addition");
    printf("2. Subtraction");
    printf("3. Multiplication");
    printf("4. Divison");
    scanf("%d", &choice);

    switch (choice) {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;

}
