#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,n;
    scanf ("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        printf("Case #%d: ",i);
        for (int j=0;j<a;j++){
            printf("a");
        }
        for (int j=0;j<b;j++){
            printf("s");
        }
        for (int j=0;j<c;j++){
            printf("h");
        }
        for (int j=0;j<d;j++){
            printf("i");
        }
        for (int j=0;j<e;j++){
            printf("a");
        }
        for (int j=0;j<f;j++){
            printf("p");
        }
        puts("");
    }

}