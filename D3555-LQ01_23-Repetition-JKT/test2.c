#include <stdio.h>

int main() {
    int n, k = 3, out;
    scanf("%d", &n);

    int a = 1;
    for (int i = 1; i <= (n + k - 1); i++) {
        a *= i;
    }

    int b = 1;
    for (int j = 1; j <= (k - 1); j++) {
        b *= j;
    }

    int c = 1;
    for (int x = 1; x <= n; x++) {
        c *= x;
    }

    out = a / (b * c);
    printf("%d\n", out);

    return 0;
}
