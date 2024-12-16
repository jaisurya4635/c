#include<stdio.h>
int main()
{
char str[30];
int roll_no,arrer;
float cgpa;
scanf("%s%d%f%d",str,&roll_no,&cgpa,&arrer);
if(cgpa>=7.0 && arrer==0)
{ printf("%s\n",str);
    printf("%d\n",roll_no);
    printf("Eligible to attend placement");
}
else if(cgpa>=7.5 && arrer>=1)
{ printf("%s\n",str);
    printf("%d\n",roll_no);
    printf("Eligible to attend placement");
}

else
{  
    printf("%s\n",str);
    printf("%d\n",roll_no);

        printf("Not Eligible to attend placement");

}
    return 0;
}
