#include <stdio.h>

#include<math.h>

int main()
{
    
int n,m,t1,t2,rem,o=0,res=0;
    
scanf("%d%d",&n,&m);
    
for(int i=n+1;i<=m;++i)
    
{
        
t2=i;
        
t1=i;
        
while(t1!=0){
            
t1/=10;
            
++o;
        
}
        
while(t2!=0){
          
rem=t2%10;
          
res+=pow(rem,o);
          
t2/=10;
        
}
        
if(res==i){
            
printf("%d ",i);
        
}
        
o=0;
        
res=0;
       

}

}