#include<stdio.h>

int main()
{
    
char s[1000];
    
int i,count=0;
    
scanf("%[^\n]s",s);
    
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')        
count++;
    
}
    
printf("%d",count+1);

}