#include <stdio.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    char operator;
    float num1, num2, result;

    // Display menu
    printf("Select an operation (+, -, *, /): ");
    scanf(" %c", &operator);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform the chosen operation
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    // Display result
    printf("Result: %.2f\n", result);
    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}
