/*
Jojo is learning about arithmetic progression, where the series will add the numbers from N until M numbers afterwards. 
But, before Jojo added the numbers. He wants to see the list. 
Help Jojo make a progression of numbers!

Note: you have to print exactly one newline character (‘ n’) at the end of your answer, otherwise your answer will be judged wrong.

Format Input
The input consists a line containing two numbers N and M separated by a space.

Format Output
Output M + 1 lines each containing a number, the number in Jojo’s counting.

Format Output
Output M + 1 lines each containing a number, the number in Jojo’s counting.

Sample Input 1 (standard input)
1 5

Sample Output 1 (standard output)
1
2
3
4
5
6

Sample Input 2 (standard input)
6 5

Sample Output 2 (standard output)
6
7
8
9
10
11
*/

#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d",&N, &M);
    for(int i=0; i<=M; i++)
    {
        printf("%d\n", N);
        N++;
    }
return 0;
}