#include <stdio.h>

int main()
{
    int len;
    scanf("%d",&len);
    long x[len];
    for (int i=0;i<len;i++)
    {
        scanf("%d",&x[i]);
    }
    int nothappy=0;
    for (int i=0;i<len-1;i++)
    {
        for (int j=i+1;j<len;j++)
        {
            if (x[i] == x[j])
            {
                nothappy++;
                break;
            }
        }
    }
    printf("%d\n",(len-nothappy));
}