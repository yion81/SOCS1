/*
Format Input
The input will consists only of one number A.

Format Output
You need to output a line containing a word “ODD” or “EVEN” depends on whether the number is odd or even. 
Please look below for the sample output. REMEMBER! 
If you output unnecessary character(s), 
the system will give you “Wrong Answer” instead of “Correct”.

Sample Input 1 (standard input)
1

Sample Output 1 (standard output)
ODD

Sample Input 2 (standard output)
2

Sample Output 2 (standard output)
EVEN
*/

#include <stdio.h>

int main()
{
    int A;
    scanf("%d", &A);
    if (A%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
return 0;
}