#include <stdio.h>

int main()
{
    int tc,len;
    scanf("%d %d",&tc,&len);
    for (int i=0;i<tc;i++)
    {
        for (int j=1;j<=len;j++)
        {
            for (int k=1;k<=len;k++)
            {
                if (len-k>=j)
                printf(" ");
                else
                printf("*");
            }
            puts("");
        }
    }
    
    
}