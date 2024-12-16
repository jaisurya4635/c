#include<stdio.h>
int main()
{
    int d1,c1,d2,c2,dalour,cent;
    scanf("%d%d%d%d",&d1,&c1,&d2,&c2);
    cent=c1+c2;
    dalour=d1+d2+(cent/100);
    cent%=100;
    printf("%d\n",dalour);
    printf("%d\n",cent);
    return 0;
}
