#include<stdio.h>

int main()
{
    
int n,f=0,s=1,next,i;
    
scanf("%d",&n);
    
for(i=1;i<=n;i++)
    
{
        
if(i<=1)
            
next=i;
            
else
            
{
                
next=f+s;
                
f=s;
                
s=next;
            
}
        
printf("%d ",next);
    
}

}