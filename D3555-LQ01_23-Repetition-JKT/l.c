#include <stdio.h>

int main()
{
    int a,b,n,count=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        while (a--)
        {
            count++;
            if (count%b==0)
            {
                a++;
            }
        }
        printf("Case #%d: %d\n",i,count);
        count =0;
    }
}