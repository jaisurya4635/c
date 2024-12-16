#include<stdio.h>
#include<math.h>  // For the round() function

int main() {
    int a, b, c, d, e, f, g, h;

    // Read the input value
    scanf("%d", &a);

    // Declare the constants
    float b1 = 0.5, c2 = 0.65, d3 = 0.80, e4 = 1.25;

    // Handle different cases based on the input value 'a'
    if (a <= 200) {
        b = a * 0.5;
        printf("Rs.%d", b);  // Print the result without rounding, it's already an integer
    }
    else if (a <= 400) {
        c = a * c2;
        // Round the result and print
        printf("Rs.%d", (int)round(c + 100));
    }
    else if (a <= 600) {
        d = a * d3 + 200;
        // Round the result and print
        printf("Rs.%d", (int)round(d));
    }
    else {
        f = a * e4 + 425;
        // Round the result and print
        printf("Rs.%d", (int)round(f));
    }

    return 0;
}
