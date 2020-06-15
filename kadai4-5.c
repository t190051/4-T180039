#include <stdio.h>

int main(){
    long a=1,b=1;
    while(1){
        a*=2;
        if(a>0) b=a;
        else break;
    }
    a=2*b-2;
    while(1){
        a++;
        if(a>0) b=a;
        else break;
    }
    printf("%ld\n",b);
    return 0;
}
