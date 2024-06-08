#include <stdio.h>

int main()
{
    char x[99];
    for (int i=0;i<3;i++)
    {
        scanf("%s",x);
        printf("%c\n",x[1]);
    }
}