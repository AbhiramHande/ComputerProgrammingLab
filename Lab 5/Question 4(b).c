#include <stdio.h>

int main(){ 
    int num = 1, N; 
    scanf("%d", &N);
    while (num <= N){ 
        (num % 2)? printf("%d\n", num):0; 
        //Infinite loop printing 1 as there is no increment
    } 
    return 0;
}