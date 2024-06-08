#include <stdio.h>

int main()
{
    int length,pos=0;
    scanf("%d",&length);
    int nums[length];
    for (int i=0;i<length;i++)
    {
        scanf("%d",&nums[i]);
    }
    for (int j=0;j<length;j++)
    {
        pos+=nums[j];
        if (pos==9)
        {
            pos=21;
        }
        if (pos==33)
        {
            pos=42;
        }
        if (pos==76)
        {
            pos=92;
        }
        if (pos==53)
        {
            pos=37;
        }
        if (pos==80)
        {
            pos=59;
        }
        if (pos==97)
        {
            pos=88;
        }
    }
    printf("%d\n",pos);
}