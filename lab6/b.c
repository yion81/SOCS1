#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    for (int i=2;i<=sqrt(num);i++)
    {
        if (num%i==0)
        return 0;
    }
    return 1;
}

int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        int x,count=0;
        scanf("%d",&x);
        for (int j=2;j<=x;j++)
        {
            if (isPrime(j))
            {
               if (x%j==0)
                {
                    count+=j;
                    x/=j;
                }
            }
        }
        printf("Case #%d: %d\n",i,count);
    }
}