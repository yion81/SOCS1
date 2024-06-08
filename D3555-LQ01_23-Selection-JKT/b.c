#include <stdio.h>

int main()
{
   int K, N, M, T;

   	scanf("%d", &T);
	for(int i=1; i<=T; i++)
	{
		scanf ("%d %d %d", &K, &N, &M);
		if (K <= N + M)
		{
			printf ("Case #%d: yes\n", i);
		}
		else
		{
			printf ("Case #%d: no\n", i);
		}
	}
}