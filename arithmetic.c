#include<stdio.h>

void main()
{
    
int a,n,d,i,s=0,tn;
    
scanf("%d%d%d",&a,&d,&n);
    
s=(n*(2*a+(n-1)*d))/2;
    
tn=a+(n-1)*d;
    
for(i=a;i<=tn;i=i+d)
    
{ 
        
printf("%d",s);
    
}

}