#include<stdio.h>

int main()
{     int n;
    scanf("%d",&n);
    int f=6,h=3;
    for(int i=1;i<=n;i++)
{
    printf("%d ",f);
    f+=h;
    h+=2;
    
}


	return 0;
}
