#include <stdio.h>

int main()
{
    int n,a,b,c,count=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if (c<b)
        {
            count++;
        }
    }
    printf("%d\n",count);
}