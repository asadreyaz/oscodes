#include<stdio.h>
#include<math.h>
float fv(float t)
{
    return (t*t*t-8*t-4);
}

float pval(float a,float b)
{
    return (a-(((b-a)*fv(a))/(fv(b)-fv(a))));
}

void main()
{
    printf("\nTO FIND THE ROOTS OF THE FUNCTION F(x) x^3-8x-4\n");
    float x1,x2,x,E;
    do
    {
        printf("\nENTER INTERVALS WITH OPPOSITE FUNCTION VALUES\n");
        scanf("%f %f",&x1,&x2);
        if(fv(x1)*fv(x2)>0.0)
        continue;
        else
        break;
    } while (1);
    printf("ENTER THE TOLERANCE VALUE\n");scanf("%f",&E);
    x=pval(x1,x2);
    while(fabs(fv(x))>E)
    {
        x=pval(x1,x2);
        if(fv(x1)*fv(x)<0)
        x2=x;
        else
        x1=x;
    }
    printf("ROOT IS = %f\n",x);
}