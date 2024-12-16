#include <stdio.h>

int main() {

    int x_bottom_left, y_bottom_left, length;
    
    scanf("%d %d %d", &x_bottom_left, &y_bottom_left, &length);
    int center_x = x_bottom_left + (length / 2);
    int center_y = y_bottom_left + (length / 2);
    

    printf("%d %d\n", center_x, center_y);
    
    return 0;
}

