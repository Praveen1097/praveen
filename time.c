#include<stdio.h>

int main()
{
    
int sec,h,m,s;
    
scanf("%d",&sec);
    
m=(sec-(3600*h))/60;
    
s=(sec-(3600*h)-(m*60));
    
printf("%d %d  ",m,s);

}