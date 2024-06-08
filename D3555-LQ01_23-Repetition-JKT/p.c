#include <stdio.h>

int main()
{
    int tc,count=0,len,x=0;
    long long int target;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        int jump=1;
        scanf("%lld",&target);
        while(x<target)
        {
            x+=jump;
            jump++;
            count++;
        }
        printf("Case #%d: %d\n",i,count);
        count=0;
        x=0;
    }
}