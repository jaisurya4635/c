#include<stdio.h>
int main()
{    //a=1 b=5
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    { 
        printf("%d   *  %d  =  %d\n ",a,i,a*i);

    }
    return 0;
}
