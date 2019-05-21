#include <stdio.h>


int main()
{
    
int n,m,rev=0;
    
scanf("%d",&n);
    
m=n;
    
while(m!=0)
   
{
        
rev=rev*10;
        
rev=rev+m%10;
        
m=m/10;
    
}
    
if(n==rev)
    
printf("yes");
    
else
    
printf("no");
    

}
