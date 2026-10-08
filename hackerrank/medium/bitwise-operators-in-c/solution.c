#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int max_and = 0, max_or = 0, max_xor = 0;

    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int r_and = a & b;
            int r_or  = a | b;
            int r_xor = a ^ b;

            if (r_and < k && r_and > max_and) max_and = r_and;
            if (r_or  < k && r_or  > max_or)  max_or  = r_or;
            if (r_xor < k && r_xor > max_xor) max_xor = r_xor;
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
