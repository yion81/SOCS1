#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x[n],out=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for (int i=0;i<n;i++)
    {
        out+=x[i];
    }
    printf("%d\n",out);
}