#include <stdio.h>

int main()
{
    int n,m,j,a;
    scanf("%d",&a);
    for (int k=1;k<=a;k++)
    {
    scanf("%d %d",&n,&m);
    // i = row
    printf("Case #%d:\n",k);
        for (int i=1;i<=n;i++)
        {
        // j = coloumn
            for (int j=1;j<=m;j++)
            {
                if (i==1 || i==n || j==1 || j==m)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            puts("");
        }
    }
}