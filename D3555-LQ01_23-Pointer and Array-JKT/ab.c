#include <stdio.h>

int main()
{
    int n,size;
    scanf("%d",&n);
    for (int ii=1;ii<=n;ii++)
    {
        scanf("%d",&size);
        int matrix[3][size][size];
        int result[size][size];
        
        //scan matrix
        for (int j=0;j<3;j++)
        {
            for (int row=0;row<size;row++)
            {
                for (int coloumn=0;coloumn<size;coloumn++)
                {
                    scanf("%d",&matrix[j][row][coloumn]);getchar();
                }
            }

            if((ii!=(n-1))&&j<2)getchar();
        }
        
        for (int row=0;row<size;row++)
        {
            for (int coloumn=0;coloumn<size;coloumn++)
            {
                 result[row][coloumn] = matrix[0][row][coloumn];
            }
        }
        
        for (int m=1;m<3;m++)
        {
            int update[size][size];
            for (int i=0;i<size;i++)
            {
                for (int j=0;j<size;j++)
                {
                    update[i][j] = 0;
                    for (int k=0;k<size;k++)
                    {
                        update[i][j] += result[i][k] * matrix[m][k][j];
                    }
                }
            }
        

            for (int i=0;i<size;i++)
            {
                for (int j=0;j<size;j++)
                {
                    result[i][j] = update[i][j];
                }
            }
        }
        printf("Case #%d:\n",ii);
        for (int row=0;row<size;row++)
        {
            for (int coloumn=0;coloumn<size;coloumn++)
            {
                printf("%d",result[row][coloumn]);
                if (coloumn<size-1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}