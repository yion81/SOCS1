#include <stdio.h>

int main()
{
    int len,count=0;
    scanf("%d",&len);
    for (int i=0;i<len;i++)
    {
        int step;
        scanf("%d",&step);
        if (step==1)
        {
            if (count>0)
            {
                printf("%d ",count);
            }
            count=0;
        }
        count++;
    }
    printf("%d\n",count);
}