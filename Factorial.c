#include<stdio.h>
int main()
{    //1*2*3*4*5
    int a,b=1;
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++)
    {    b=b*i;
    
    }
       printf("%d\n",b);
    return 0;
}
