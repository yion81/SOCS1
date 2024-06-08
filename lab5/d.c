#include <stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        int size;
        scanf("%d",&size);
        int x[size][size];
        for (int col=0;col<size;col++)
        {
            for (int row=0;row<size;row++)
            {
                scanf("%d",&x[col][row]);
            }
        }
        
        int res[size];
        
        for (int z=0;z<size;z++)
        {
            res[z]=0;
        }
        for (int col=0;col<size;col++)
        {
            for (int row=0;row<size;row++)
            {
                res[col]+=x[row][col];
            }
        }
        printf("Case #%d: ",i);
        
        for (int j=0;j<size;j++)
        {
            if (j<size-1)
            printf("%d ",res[j]);
            else
            printf("%d",res[j]);
        }
        puts("");
    }
}