#include <stdio.h>

int main(){ 
    int num = 1, N; 
    scanf("%d", &N);
    do{ 
        (num % 2)? printf("%d\n", num):0; 
        num++;
    } while(num <= N);                      //Almost the same as while except if N is lesser than 1, then will always print 1 and stop
    return 0;
}