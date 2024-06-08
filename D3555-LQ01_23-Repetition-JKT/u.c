#include <stdio.h>

int main()
{
    int n,len;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&len);
        char x[len+1];
        int countL=0,countB=0;
        for (int j=0;j<=len;j++)
        {
            scanf("%c",&x[j]);
        }
        for (int j=0;j<=len;j++)
        {
            if (x[j]=='L')
            {
                countL++;
            }
            else if(x[j]=='B')
            {
                countB++;
            }
        }
        if (countL>countB)
        {
            printf("Lili\n");
        }
        else if(countB>countL)
        {
            printf("Bibi\n");
        }
        else
        {
            printf("None\n");
        }
    }
}