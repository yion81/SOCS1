#include <stdio.h>

int main()
{
    int len;
    scanf("%d",&len);
    int nums[len];
    for (int i=0;i<len;i++)
    {
        scanf("%d",&nums[i]);
    }
    int sum=0;
    for (int i=0;i<len;i++)
    {
        sum+=nums[i];
    }
    printf("%d\n",sum);

}