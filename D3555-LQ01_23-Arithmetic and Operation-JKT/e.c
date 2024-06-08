#include <stdio.h>

int main()
{
    long int x,y,plus,minus,multi,divi,mod;
    scanf("%d %d",&x,&y);
    plus = x+y;
    minus = x-y;
    multi = x*y;
    divi = x/y;
    mod = x%y;
    printf("%d\n%d\n%d\n%d\n%d\n",plus,minus,multi,divi,mod);
}