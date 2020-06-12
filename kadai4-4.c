#include <stdio.h>

int main() {
    int i = 1;
    printf("%d\n", i)
    while(1){
        i++;
        if(i<0)
            break;
    }
    i--;
    printf("%d\n",i);
}
