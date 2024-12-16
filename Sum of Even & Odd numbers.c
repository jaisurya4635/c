#include<stdio.h>
int main()
{
    int a,b;
    float count_a=0,count_b=0,sum1=0,sum2=0;
        do
       {
           scanf("%d",&a);
         if(a==-1)
           {
           break;
           }
                if(a%2==0)
           {
               sum1=sum1+a;
               count_a++;
           }
           
                 else
           {
               sum2=sum2+a;
               count_b++;
           }
       }
     while(1);
       printf("%d\n",(int)sum1);
        printf("%d\n",(int)sum2);
       printf("%.2f\n",sum1/count_a);
        printf("%.2f\n",sum2/count_b);
    return 0;
}



