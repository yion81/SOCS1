#include <stdio.h>
#include <string.h>

int main()
{
    int total=2;
        char string[100];
        scanf("%[^\n]",string);
            for (int k=0;k<total;k++) //this loop is for going back to the first index so that if it finds another same character
            //is starts doing it's thing
            {
                for (int j=0;j<strlen(string);j++)
                {
                    if (string[j] == string[j+1])
                    {
                        string[j] = string [j+1] = string [j+2];
                        total++;
                    }
                }
                printf("%d\n",strlen(string));
            }
        printf("%s\n",string);
}