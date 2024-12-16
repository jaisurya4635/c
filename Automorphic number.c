#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
 
    switch(a){
    case 0 ... 9:
      b=a*a;
      c=b&10;
     if (a==c)
      printf("Automorphic Number");
      else if(a!=c)
      printf("Not Automorphic Number");
    break;
    default:
    printf("Invalid input");
    }
     
    return 0;
}
