#include <stdio.h>

int main()
{
    int lenbibi,lendrag;
    scanf("%d %d",&lenbibi,&lendrag);
    int bibi[lenbibi],drag[lendrag];

    for (int i=0;i<lenbibi;i++)
    {
        scanf("%d",&bibi[i]);
    }
    for (int i=0;i<lendrag;i++)
    {
        scanf("%d",&drag[i]);
    }
    int highestbibi = bibi[0];
    for (int i=1;i<lenbibi;i++)
    {
        if (bibi[i]>highestbibi)
        {
            highestbibi = bibi[i];
        }
    }
    int highestdrag = drag[0];
    for (int i=1;i<lendrag;i++)
    {
        if (drag[i]>highestdrag)
        {
            highestdrag = drag[i];
        }
    }
    if (highestbibi > highestdrag)
    {
        printf("The dark secret was true\n");
    }
    else
    {
        printf("Secret debunked\n");
    }
}