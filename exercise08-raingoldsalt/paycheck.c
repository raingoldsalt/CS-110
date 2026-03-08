#include <stdio.h>


double calculate_pay(double hours, double rate){
    double total;
    if(hours<=40){
        total = hours * rate;
    }
    else {
        total = rate * 40 + (rate * 1.5) * (hours - 40);
    }
    return total;
}

int main() {
    double hours, rate;
    printf("Enter hours worked: ");
    scanf("%lf", &hours);

    printf("Enter the rate of pay: ");
    scanf("%lf", &rate);

    double amount_of_pay = calculate_pay(hours, rate);

    printf("You earned $%.2lf\n", amount_of_pay);
    return 0;
}
