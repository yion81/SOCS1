#include <stdio.h>

int countSetBits (int n);

int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        int len;
        scanf("%d",&len);
        int nums[len];
        for (int j=0;j<len;j++)
        {
            scanf("%d",&nums[j]);
        }
        int countAtLeast3Bits = 0;
        int countNo3Bits = 0;

        for (int j=0;j<len-1;j++)
        {
            for (int k=j+1;k<len;k++)
            {
                int XOR = nums[j] ^ nums[k];
                int bits = countSetBits(XOR);

                if (bits>=3)
                {
                    countAtLeast3Bits++;
                }
                else
                {
                    countNo3Bits++;
                }
            }
        }
        printf("Case #%d: %d %d\n",i,countAtLeast3Bits,countNo3Bits);
    }
}

int countSetBits (int n)
{
    int count=0;
    while (n)
    {
        count+= n & 1;
        n>>=1;
    }
    return count;
}