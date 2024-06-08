#include <stdio.h>

int main()
{
    int t;
    float a,b,c,d;
    float x,y1,y2,z1,z2,z3;
    float out1,out2;
    
    scanf("%d",&t);
    if (t==3)
    {
        for (int i=0;i<t;i++)
        {
            scanf("%f %f %f %f",&a,&b,&c,&d);
            x=a/1;
            y1=b/2;
            y2=b/2;
            z1=c/3;
            z2=d/4;
            z3=c/3;
            out1=x+y1+y2+z1+z2+z3;
            out2=out1*2;
            
            //out=a+b+
            printf("%.2f\n",out2);
        }
    }
}