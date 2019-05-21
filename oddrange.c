#include<stdio.h>


int main()
{
    


int n,m,i,rem;


scanf("%d%d",&n,&m);


for(i=n+1;i<m;++i)


{


rem=i%2;


if(rem==1)


printf("%d ",i);


}


}
