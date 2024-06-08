#include <stdio.h>

int main()
{
    int a,x,y;
    
    scanf("%d", &a);
    x=a*2;
    printf("%d plus %d is %d\n",a,a,x);
    y=--x;
    printf("minus one is %d\n", y);
}