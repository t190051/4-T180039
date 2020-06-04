#include <stdio.h>

int fac(int n) { return (n == 0) ? 1 : n * fac(n - 1); }

int binomial(int n, int k) { return fac(n) / (fac(k) * fac(n - k)); }

int main() {
    int i;

    for(i = 0; i <= 12; i++) {
        printf("12C%d = %d\n", i, binomial(12, i));
    }

    printf("\n");

    for(i = 0; i <= 13; i++) {
        printf("13C%d = %d\n", i, binomial(13, i));
    }
}