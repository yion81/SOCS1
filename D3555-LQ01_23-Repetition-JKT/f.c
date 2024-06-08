#include <stdio.h>

int main()
{
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    count = k;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("#");
        }
        puts("");
    }
    puts ("");
    for (int i=1;i<=n;i++)
    {
        if (count!=i){
            for (int j=0;j<n;j++)
            {
                printf(".");
            }
            puts("");
        }
        else{
            for (int j=0;j<n;j++)
            {
                printf("#");
            }
            puts("");
            count+=k;
        }
    }
    puts ("");
    count = k;
    for (int i=0;i<n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (count!=j)
            {
                printf(".");
            }
            else
            {
                printf("#");
                count+=k;
            }
        }
        count = k;
        puts("");
    }
}