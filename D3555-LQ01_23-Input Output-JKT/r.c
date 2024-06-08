#include <stdio.h>

int main()
{
    char N[11],M[101],C;
    int O;

    scanf("%s\n", N);
    scanf("%[^\n]\n", M);
    scanf("%c", &C);
    scanf("%d", &O);
    printf("Id    : %s\nName  : %s\nClass : %c\nNum   : %d\n",N,M,C,O);
}