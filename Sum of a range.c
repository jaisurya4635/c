#include<stdio.h>
int main()
{
    int start,end;
    scanf("%d\n%d",&start,&end);
    int sum=0;
    while(start<=end)
    {
        sum+=start;
        start++;
    }
    printf("%d",sum);


    return 0;
}
