#include <stdio.h>

int main()
{
    int n,count=1,out=1;
    scanf("%d",&n);
    int x[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n-1;j++)
        {
            if (x[i]==x[j])
            {
                count++;
            }
        }
        if (out<=count)
        {
            out=count;
        }
        count = 1;
    }
    printf("%d\n",out);
}