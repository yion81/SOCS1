#include <stdio.h>

int main()
{
    char s[101], x[10];
    int y;
    scanf("%[^\n]", s);
    scanf("%s %d",&x,&y); 
    printf("Name: %s\nNIS: %s\nAge: %d\n", s, x, y);
}