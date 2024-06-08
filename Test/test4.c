#include <stdio.h>

int main()
{
    int A,B,Plus,Minus;
    scanf("%d",&A);
    Plus=A*2;
    printf("%d plus %d is %d\n",A,A,Plus);
    Minus=--Plus;
    printf("minus one is %d",Minus);

}