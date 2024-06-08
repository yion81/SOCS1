#include <stdio.h>

int main()
{
    int x,y,z,count=0,count1=0;
    scanf("%d %d %d",&x,&y,&z);
    for (x;x<=z;x++)
    {
        count++;
    }
    for (y;y>=z;y--)
    {
        count1++;
    }
    count--;
    count1--;
    if (count==count1)
    {
        printf("%d\n",count);
    }
    else
    {
        printf("-1\n");
    }
}