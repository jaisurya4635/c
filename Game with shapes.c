#include<stdio.h>
int main()
{
    int a,b;
    //a=circle 3.14*r*r b=square s*s
    scanf("%d%d",&a,&b);
    int c=3.14*a*a;
    int d=b*b;
    if(d>c)
    printf("circle can be inside a Square");
    else
    printf( "circle cannot be inside a Square");
    return 0;
}
