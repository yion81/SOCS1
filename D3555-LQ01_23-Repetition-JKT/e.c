#include <stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        int num,pos;
        scanf("%d %d",&num,&pos);
        while (pos)
        {
            num>>=1;
            pos--;
        }
        int bit=num&1;
        printf("%d\n",bit);
    }
}