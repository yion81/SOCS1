#include <stdio.h>
#include <string.h>

int main() {
    int total = 2;
    char nama[200] = {};

    scanf("%[^\n]",nama);
    for (int l=0;l<total;l++)
    {
        int len = strlen(nama);
        for (int i=0;i<len;i++)
        {
            if (nama[i] == nama[i+1])
            {
                nama[i] = nama[i+1] = nama[i+2];
                total +=1;
            }
        }
    }
    printf("%s\n",nama);
}