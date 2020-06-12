#include <stdio.h>

int main() {
    long i = 1;
    printf("%ld\n", i)
}
    while(1){
        if(i<0){
            break;
        }
        i*=2;
    }
    printf("%ld\n",i-1);
}
