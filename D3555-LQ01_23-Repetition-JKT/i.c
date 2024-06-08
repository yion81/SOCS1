#include <stdio.h>

int main()
{
    int n,x,y,z;
    scanf("%d",&n);
    int arr[n];
    scanf("%d %d %d",&x,&y,&z);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int avg=0;
    avg = x+y+z;
    for (int i=0;i<n;i++)
    {
        avg+=arr[i];
    }
    avg = avg/(n+3);
    if (x>=avg){
        printf("Jojo lolos\n");
    }
    else{
        printf("Jojo tidak lolos\n");
    }
    if (y>=avg){
        printf("Lili lolos\n");
    }
    else{
        printf("Lili tidak lolos\n");
    }
    if (z>=avg){
        printf("Bibi lolos\n");
    }
    else{
        printf("Bibi tidak lolos\n");
    }
}