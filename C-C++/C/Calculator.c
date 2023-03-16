#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // get operator and operands from user
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    // perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator");
            return 1;
    }

    // display result
    printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);

    return 0;
}