#include <stdio.h>

int main() {
  
    int x1, y1, x2, y2;
    
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    float midpoint_x = (x1 + x2) / 2.0;
    float midpoint_y = (y1 + y2) / 2.0;
    
    printf("%.1f %.1f\n", midpoint_x, midpoint_y);
    
    return 0;
}
