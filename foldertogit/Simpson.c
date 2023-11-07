#include<stdio.h>
#define f(x) 1/(1+x*x)
void main()
{
    
    double h,x,s=0;int a=0,b=4;
    int n;
    printf("ENTER NO OF INTERVAL\n");scanf("%d",&n);
    h=(float)(b-a)/n;
   
    for(int i=0;i<=n;i++)
    {
        x=a+i*h;
        if(i==0||i==n)
        s=s+f(x);
        else if(i%2!=0)
        s=s+4*f(x);
        else
        s=s+2*f(x);
    }
    printf("THE VALUE OF THE INTEGRAL IS = %0.4lf\n",(h*s)/3);
}