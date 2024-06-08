#include <stdio.h>

int main()
{
    long int a,b,c,d,out1,out2,out3;
    long int a1,b1,c1,d1,out1a,out2a,out3a;
    long int a2,b2,c2,d2,out1b,out2b,out3b;
    
    scanf("(%ld+%ld)x(%ld-%ld)\n",&a,&b,&c,&d);
    scanf("(%ld+%ld)x(%ld-%ld)\n",&a1,&b1,&c1,&d1);
    scanf("(%ld+%ld)x(%ld-%ld)",&a2,&b2,&c2,&d2);
    out1=a+b;
    out2=c-d;
    out3=out1*out2;
    out1a=a1+b1;
    out2a=c1-d1;
    out3a=out1a*out2a;
    out1b=a2+b2;
    out2b=c2-d2;
    out3b=out1b*out2b;
    printf("%ld %ld %ld\n",out3,out3a,out3b);
}