#include <stdio.h>

int main()
{
    int tc,x,y,count=0;
    scanf ("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        scanf ("%d %d",&x,&y);
        while (x--)
        {
            count++;
            if (count%y==0)
            {
                x++;
            }
        }
        printf("Case #%d: %d\n",i,count);
        count=0;
    }
}