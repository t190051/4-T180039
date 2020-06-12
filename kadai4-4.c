#include <stdio.h>

int main() {
    int i = 1;
    printf("%d\n", i)
}

    int i=1,j=1,k=0;
    while(1){
        i=i*2;
        printf("%d\n",i);
        if(i<0){
            i=j;
            while(1){
                j=j/2;
                i=i+j;
                k=i;
                printf("%d\n",i);
                if(i==k) break;
            }
        }
        j=i;
        if(i==k) break;
    }
