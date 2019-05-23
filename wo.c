#include<stdio.h>

int main()
{
    
char s[1000];
    
int i,count=0;
    
scanf("%[^\n]s",s);
    
for(i=1;s[i]!='\1';i++)
{
if(s[i]==' ')        
count++;
    
}
    
printf("%d",count+1);

}