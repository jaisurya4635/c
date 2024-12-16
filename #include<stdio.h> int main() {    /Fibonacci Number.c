#include<stdio.h>
int main()
{
int sum = 0, n;
int a = 0;
int b = 1;

scanf("%d", &n);

while(sum <= n)
{

a = b; 
b = sum;
sum = a + b; 

}
if(a==b)
printf("Fibonacci Number");
else
    printf("Not Fibonacci Number");

return 0;
}
