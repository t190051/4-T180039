#include <stdio.h>

int fac(int n) { return (n == 0) ? 1 : n * fac(n - 1); }

int main() {
    int i;
    for(i = 1; i < 22; i++) {
        printf("%2d! = %d\n", i, fac(i));
    }
}
