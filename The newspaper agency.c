#include <stdio.h>

int main() {

    int w, x, y;
    
    scanf("%d %d %d", &w, &x, &y);
    
    int totalRevenue = w * x;
    
    int totalCost = (w * y) + 100;
    
    int profit = totalRevenue - totalCost;
    
    printf("%d\n", profit);
    
    return 0;
}
