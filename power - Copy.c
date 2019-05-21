#include <stdio.h>


int main()
{
    
int n,m,res=1;
    
scanf("%d%d",&n,&m);
    
while(m!=0)
    
{
        
res*=n;
        
--m;
    
}
    
printf("%d",res);

}
