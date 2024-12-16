#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    
    int tens = number / 10;  
    int units = number % 10;  
    int sum = tens + units;
    
    printf("%d\n", sum);
    
    return 0;
}
