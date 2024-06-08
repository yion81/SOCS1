#include <stdio.h>
#include <string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        char x[100];
        scanf("%s",&x);
        int len=strlen(x);
        int count=0;
        for (int j=0;j<len;j++)
        {
            if (x[j]=='.')
            {
                if (x[j+1]!='.')
                count++;
            }
        }
        if (count==5)
        printf("Case #%d: YES\n",i);
        else
        printf("Case #%d: NO\n",i);
    }
}