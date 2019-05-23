#include <stdio.h>

int main()
{
   int n,i,ans[50];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&ans[i]);
       printf("%d %d\n",ans[i],i);
   }
}