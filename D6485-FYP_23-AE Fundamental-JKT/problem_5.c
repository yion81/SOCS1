/*
INPUT
The input consists of T testcases where in each testcase the value of K, N , and M might differ from one another. 
The first line of the input contains T , the number of testcases. 
Each testcase consists of one line containing three numbers K, N , and M which show 
the amount of instant noodle packs needed to fix the sink, the amount of instant noodle packs Lili has at home, and the amount of instant noodle packs at the store 
respectively.

OUTPUT
For each testcase, output one line containing “Case #X: ” (without quotes) where X is the testcase number (starting from 1) 
and then followed by “yes” (without quotes) if Lili can fix her sink or “no” (without quotes) if Lili can’t fix her sink.

Sample Input (standard input)
2
10 3 5
10 9 2

Sample Output (standard output)
Case #1: no
Case #2: yes

*/

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