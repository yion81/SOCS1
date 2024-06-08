#include <stdio.h>

int main()
{
    int tc,count=0;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        int x;
        scanf("%d",&x);
        printf("Case #%d:\n",i);
        //j = baris
        // k = kolom
        for (int j=0;j<x;j++)
        {
            for (int k=0;k<x;k++)
            {
                if (k>=x-j-1)
                {
                    int sum=j+k;
                    if (sum%2==0)
                    printf("*");
                    else
                    printf("#");
                }
                else
                printf(" ");
            }
            puts("");
        }
    }
}