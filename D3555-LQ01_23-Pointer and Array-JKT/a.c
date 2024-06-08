#include <stdio.h>

int main()
{
    int len;
    scanf("%d",&len);
    int x[len+1];

    for (int i=1;i<=len;i++)
    {
        scanf("%d",&x[i]);
    }

    int tc;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        int target1,target2;
        scanf("%d %d",&target1,&target2);
        int count=0;
        for (int j=target1;j<=target2;j++)
        {
            count+=x[j];
        }
        printf("Case #%d: %d\n",i,count);
    }
}