#include <stdio.h>

#define N 5

int main()
{
    
int n,i,j;
    
int median,a[N],temp;
    
scanf("%d",&n);
    
for(i=0;i<n;i++)
    
{
        
scanf("%d",&a[i]);
    
}
    
temp=0;
        
for(i=0;i<n-1;i++)
        
{
            
for(j=0;j<(n-i-1);j++)
            
{
                
if(a[j]<a[j+1])
                
{
                    
temp=a[j];
                    
a[j]=a[j+1];
                    
a[j+1]=temp;
                
}
            
}
        
}
        
if(n%2==0)
        
median=(a[(n/2)-1]+a[(n/2)])/2;
        
else
        
median=a[(n/2)];
        
printf("%d ",median);

}