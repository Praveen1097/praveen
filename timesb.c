#include<stdio.h>

struct TIME{
    
int min,seco;

};

int main()
{
    
struct TIME t1,t2,t3;
    
int sec1,sec2,totalsec;
    
scanf("%d%d",&t1.min,&t1.seco);
    
scanf("%d%d",&t2.min,&t2.seco);
    
sec1=t1.min*60+t1.seco;
    
sec2=t2.min*60+t2.seco;
    
totalsec=sec1-sec2;
    
t3.min=totalsec/60;
    
t3.min=t3.min%60;
    
t3.seco=totalsec%60;
    
printf("%d %d ",t3.min,t3.seco);

}
