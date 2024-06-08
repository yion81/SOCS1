#include <stdio.h>

int main()
{
    float x,y,output;
    
    scanf("%f %f", &x, &y);
    output=y/x*100;
    printf("%.4f%%\n", output);
}