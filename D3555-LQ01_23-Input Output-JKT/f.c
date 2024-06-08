#include <stdio.h>

int main()
{
    char s[100];
    int a;
    
    gets(s);
    scanf("%d", &a);
    
    printf("%s\n%d\n",s,a);
}