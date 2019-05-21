#include<stdio.h>


int main()
{
    

int n,sum=0,r,temp;

scanf("%d",&n);

temp=n;    

while(n>0)
{
 
r=n%10;
 
sum=sum+(r*r*r);
 
n=n/10;

}

if(temp==sum)

printf("yes");

else

printf("no");


}
