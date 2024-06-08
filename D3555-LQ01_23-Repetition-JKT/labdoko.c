#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        char string[100];
        char target;
        scanf("%s",&string);getchar();
        int len=strlen(string);
        scanf("%c",&target);getchar();

        for (int j=0;j<len;j++)
        {
            if (string[j]==tolower(target) || string[j]==toupper(target))
            {
                if(isupper(string[j]))
                {
                    string[j]=tolower(string[j]);
                }
                else
                {
                    string[j]=toupper(string[j]);
                }
            }
        }
         printf("Case #%d: %s\n",i,string);
    }
}