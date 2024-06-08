#include <stdio.h>

int main()
{
    char n1[101],n2[101];
    double h1,h2;
    int a1,a2;


    scanf("%s", n1);
    scanf("%lf", &h1);
    scanf("%d", &a1);
    scanf("%s", n2);
    scanf("%lf", &h2);
    scanf("%d", &a2);
    getchar();

    printf("Name 1: %s\nHeight 1: %.2lf\nAge 1: %d\nName 2: %s\nHeight 2: %.2lf\nAge 2: %d\n",n1,h1,a1,n2,h2,a2);
}