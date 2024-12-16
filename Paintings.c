#include <stdio.h>

int main() {
    int wallLength, wallBreadth;
    int painting1Length, painting1Breadth;
    int painting2Length, painting2Breadth;

    // Read input
    scanf("%d %d", &wallLength, &wallBreadth);
    scanf("%d %d", &painting1Length, &painting1Breadth);
    scanf("%d %d", &painting2Length, &painting2Breadth);

    // Check if both paintings can fit side by side (horizontally)
    if ((painting1Length + painting2Length <= wallLength && painting1Breadth <= wallBreadth && painting2Breadth <= wallBreadth) ||
        (painting1Breadth + painting2Breadth <= wallBreadth && painting1Length <= wallLength && painting2Length <= wallLength)) {
        printf("Raj can fix both painting\n");
    }
    // Check if both paintings can fit one above the other (vertically)
    else if ((painting1Length <= wallLength && painting1Breadth + painting2Breadth <= wallBreadth) ||
             (painting1Breadth <= wallLength && painting1Length + painting2Length <= wallBreadth)) {
        printf("Raj can fix both painting\n");
    } 
    else {
        printf("Raj cannot fix both painting\n");
    }

    return 0;
}
