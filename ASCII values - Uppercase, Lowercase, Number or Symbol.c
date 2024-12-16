#include<stdio.h>
int main()
{
    char a,b;
    scanf("%c",&a);
     b=("%d",a);
      if(a>=65 && b<=90)
          printf("Upper");
     else if(b>=97 && b<=122)
          printf("Lower");
          else
          printf("Symbol");
    return 0;
}
