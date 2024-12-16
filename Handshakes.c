#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1,sum=0;
    while(i<=n)
    {
        sum+=n-i;
        i++;
    }
    printf("%d",sum);
    return 0;
}
