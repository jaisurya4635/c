#include<stdio.h>

int main()
{ int n;
scanf("%d",&n);
int temp=0,a=101,isprime=0;
while(temp<n)
{
    isprime=1;
    for (int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            isprime=0;
            break;
        }
    }

    if(isprime)
    {
        printf("%d ",a);
        temp++;
    }
    a++;
}

	return 0;
}
