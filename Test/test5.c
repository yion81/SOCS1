#include <stdio.h>

int main()
{
    char kelas[11];
    int h1,m1,h2,m2;
    for (int i=0;i<5;i++)
    {
        scanf("%s %02d:%02d-%02d:%02d",&kelas,&h1,&m1,&h2,&m2);
        h1--;h2--;
        if(h1<0)
        {
           h1=23;
        }
        if(h2<0)
        {
            h2=23;
        }
        printf("%s %02d:%02d-%02d:%02d\n",kelas,h1,m1,h2,m2);
    }
}