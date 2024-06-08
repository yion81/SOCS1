#include <stdio.h>

int main()
{
    long double daging,sayur,telur;

    scanf("%llf %llf %llf",&daging,&sayur,&telur);

    if (daging>=sayur && daging>=telur)
    {
        printf("Daging\n");
        if(sayur>=telur)
        {
            printf("Sayur\nTelur\n");
        }
        else
        {
            printf("Telur\nSayur\n");
        }
    }
    else if (sayur>=daging && sayur>=telur)
    {
        printf("Sayur\n");
        if (daging>=telur)
        {
            printf("Daging\nTelur\n");
        }
        else
        {
            printf("Telur\nDaging\n");
        }
    }
    else
    {
        printf("Telur\n");
        if (daging>=sayur)
        {
            printf("Daging\nSayur\n");
        }
        else
        {
            printf("Sayur\nDaging\n");
        }
    }
    return 0;
}