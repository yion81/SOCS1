/*
Lili was currently having a trouble with sleeping. She have been doing the “counting sheeps” method for 1 week long 
and got bored with it. Just in the right time, Lili got an idea to count a random number. 
She said this method would make her brain tired and make her easier to sleep. 
What she did is to get two number N and M , then she count M numbers starting from N . 
Now, you are having an insomnia, so you want to try this method.

Note: you have to print exactly one newline character (‘ n’) at the end of your answer, otherwise your answer will be judged wrong.

Format Input
The input consists a line containing two numbers N and M separated by a space.

Format Output
Output M lines each containing a number, the number in your counting.

Sample Input (standard input)
1 
5

Sample Output (standard output)
1
2
3
4
5
*/

#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i=0; i<M; i++)
    {
        printf("%d\n",N);
        N++;
    }
return 0;
}