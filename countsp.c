#include <stdio.h>


int main()
{
   
char s[1000];
   
int i,sp;
   
i=sp=0;
   
gets(s);
   
for(i=0;s[i]!='\0';i++)
   
{
       
if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||
       
s[i]=='%'||s[i]=='^'||s[i]=='&'||s[i]=='*'||s[i]=='('||s[i]==')'||s[i]=='-'||
       
s[i]=='_') {
       
sp++;
       
}
   
}
   
printf("%d",sp);

}
