#include <stdio.h>

int main() {
    char i = 0;

    while(1) {
        i++;
        printf("%d\n", i);
        if(i < 0)
            break;
    }
}