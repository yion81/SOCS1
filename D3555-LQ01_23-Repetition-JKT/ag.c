#include <stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        int target,multi=0,multi2=1;
        int nums=1;
        scanf("%d",&target);
        printf("Case %d: ",i);
        if (target==1)
        {
            printf("1");
        }
        else
        {
            for (int j=0;j<target-1;j++)
            {
                printf("%d ",nums);
                multi+=multi2;
                nums+=multi;
            }
            printf("%d",nums);
        }
        puts("");
    }
    return 0;
}