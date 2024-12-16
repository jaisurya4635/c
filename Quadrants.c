#include<stdio.h>
int main()
{ // q1=(++),q2=(-+),Q3=(--),q4=(+-)
 int x,y;
 scanf("%d%d",&x,&y);
 if(x>0 && y>0)
      printf("Ist Quadrant");
else if(x<0 && y>0)
      printf("IInd Quadrant");
else if(x<0 && y<0)
      printf("IIIrd Quadrant");
else if(x>0 && y<0)      
      printf("IVth Quadrant");
else 
        printf("Origin");
      
      
    return 0;
}
