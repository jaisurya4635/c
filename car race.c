#include<stdio.h>
int main()
{
    int r1,r2,r3,c1;
    scanf("%d%d%d%d",&r1,&r2,&r3,&c1);
    if(r1%c1==0)
    printf("Car 1 goes into road A");
    else if(r2%c1==0)
    printf("Car 1 goes into road B");
    else if(r3%c1==0)
    printf("Car 1 goes into road C");
    else
    printf("No path exist");
    return 0;
}
