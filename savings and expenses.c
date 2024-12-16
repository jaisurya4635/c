#include<stdio.h>
int main()
{ int salary,bank,hfees,food,parents;
scanf("%d%d%d%d%d",&salary,&bank,&hfees,&food,&parents);
int total=bank+hfees+food+parents;
if(total<salary){
printf("He can save the money");
    
}
else
{
    printf("He has to work hard");
}
    return 0;
}
