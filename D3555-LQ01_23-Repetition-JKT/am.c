#include <stdio.h>

int main()
{
    int tc;
    scanf ("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        int x;
        scanf ("%d",&x);
        printf("Case #%d:\n",i);
        for (int j=1;j<=x;j++)
        {
            if (j%3==0 || j%5==0)
            {
                if (j%15==0)
                {
                    printf("%d Lili\n",j);
                }
                else
                {
                printf ("%d Jojo\n",j);
                }
            }
            else
            {
                printf ("%d Lili\n",j);
            }
        }
    }
}