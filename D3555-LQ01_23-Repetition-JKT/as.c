#include <stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        int len,count=0;
        scanf("%d",&len);
        char key[len],answer[len];
        scanf("%s",&answer);
        scanf("%s",&key);
        for (int j=0;j<len;j++)
        {
            if (answer[j]==key[j])
            {
                count++;
            }
        }
        count*=100;
        count/=len;
        printf("Case #%d: %d\n",i,count);
    }
}