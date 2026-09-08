#include <stdio.h>

int main() {
    
    float principal, rate, time, simple_interest;

   
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual rate of interest (%%): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    
    simple_interest = (principal * rate * time) / 100;

    
    printf("\nThe Simple Interest is: 2%f\n", simple_interest);

        float total_amount = principal + simple_interest;
    printf("The Total Amount (Principal + Interest) is: %.2f\n", total_amount);

    return 0;
}

