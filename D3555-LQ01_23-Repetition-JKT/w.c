#include <stdio.h>

int main()
{
    int n,len,countodd=0,counteven=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&len);
        int x[len];
        for (int j=0;j<len;j++)
        {
            scanf("%d",&x[j]);
        }
        for (int j=0;j<len;j++)
        {
            if (x[j]%2==0)
            {
                counteven++;
            }
            else
            {
                countodd++;
            }
        }
        printf("Odd group : %d integer(s).\nEven group : %d integer(s).\n\n",countodd,counteven);
        counteven=0;
        countodd=0;
    }
}