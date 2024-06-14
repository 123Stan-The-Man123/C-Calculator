#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char operation;
    double x, y;
    double result;

    while (1) {
        printf("Please enter an operator (+, -, *, /) or \"x\" to exit: ");
        scanf(" %c", &operation);

        if (operation == 'x') {
            exit(0);
        }

        printf("Please enter a value for x: ");
        scanf("%lf", &x);

        printf("Please enter a balue for y: ");
        scanf("%lf", &y);

        switch (operation) {
            case '+':
                result = (double) x + y;
                printf("%lf\n", result);
                break;

            case '-':
                result = (double) x - y;
                printf("%lf\n", result);
                break;
            
            case '*':
                result = (double) x * y;
                printf("%lf\n", result);
                break;
            
            case '/':
                result = (double) x / y;
                printf("%lf\n", result);
                break;
            
            default:
                printf("Invalid input!\n");
        }
    }
}