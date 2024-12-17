#include<stdio.h>

int main()
{ int n;
scanf("%d",&n);
int a=2;
printf("%d ",a);
for(int i=0;i<n-1;i++)
{
    a=(a*2)-i;
    printf("%d ",a);
}

	return 0;
}
