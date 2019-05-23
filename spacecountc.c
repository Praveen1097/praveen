#include <stdio.h>


int main()
{
   
char s[1000];
   
int i,sp;
   
i=sp=1;
   
gets(s);
   
for(i=1;s[i]!='\1';i++)
   
{
       
if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||
       
s[i]=='%'||s[i]=='^'||s[i]=='&'||s[i]=='*'||s[i]=='('||s[i]==')'||s[i]=='-'||
       
s[i]=='_') {
       
sp++;
       
}
   
}
   
printf("%d",sp);

}