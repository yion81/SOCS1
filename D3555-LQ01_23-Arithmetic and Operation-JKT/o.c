#include <stdio.h>

int main()
{
    long int x,y,out;
    for (int i=0;i<4;i++)
    {
        scanf("%ld %ld",&x,&y);
        out=x*y;
        printf("%ld\n",out);
    }
}