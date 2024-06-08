#include <stdio.h>

int main()
{
    float x,y,output;
    
    scanf("%f %f", &x, &y);
    output=x/y*100;
    printf("%.2f%%\n", output);
}