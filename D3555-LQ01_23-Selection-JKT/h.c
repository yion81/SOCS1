#include <stdio.h>

int main()
{
    char x,y,z;
    scanf("%c %c %c",&x,&y,&z);

    if (x<=y && x<=z)
    {
        printf("1 ");
        if (y<=z)
        {
        printf("2 3\n");
        }
        else
        printf("3 2\n");
    }
    else if (y<=x && y<=z)
    {
        printf("2 ");
        if (x<=z)
        {
            printf("1 3\n");
        }
        else
        {
            printf("3 1\n");
        }
    }
    else
    {
        printf("3 ");
        if(x<=y)
        {
            printf("1 2\n");
        }
        else
        {
            printf("2 1\n");
        }
    }
    return 0;
}