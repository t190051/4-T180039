#include <stdio.h>

int main(){
    int i=1;

    int j=1,k=0;
    while(1){
        i*=2;
        if(i<0){
            i=j;
            while(1){
                j/=2;
                i+=j;
                if(i==k) break;
                k=i;
            }
        }
        j=i;
        if(i==k) break;
    }
    printf("%d\n",i);
}
