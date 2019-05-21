#include <stdio.h>


int main()
{
   
int n,m,o;
   
scanf("%d%d%d",&n,&m,&o);
   
if(n>=m&&n>=o)
   
printf("%d",n);
   
else if(m>=n&&m>=o)
   
printf("%d",m);
   
else
   
printf("%d",o);

}