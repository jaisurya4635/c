#include <stdio.h>

int main() {

    int principal, rate, years;
    
    scanf("%d %d %d", &principal, &rate, &years);
    
    float interest = (principal * rate * years) / 100.0;
    
    float totalAmount = principal + interest;
    
    float discount = (2.0 / 100.0) * interest;
    
    float finalSettlement = totalAmount - discount;
    
    printf("%.2f\n", interest);
    printf("%.2f\n", totalAmount);
    printf("%.2f\n", discount);
    printf("%.2f\n", finalSettlement);
    
    return 0;
}
