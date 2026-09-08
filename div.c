 #include <stdio.h>

int main() {
    float numerator, denominator, quotient;

    printf("Enter the numerator (number to be divided): ");
    scanf("%f", &numerator);
 
 printf("Enter the denominator (number to divide by): ");
    scanf("%f", &denominator);

    if (denominator == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        quotient = numerator / denominator;

        printf("Result: %.2f / %.2f = %.2f\n", numerator, denominator, quotient);
    }

    return 0;
}