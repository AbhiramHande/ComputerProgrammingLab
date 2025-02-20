#include <stdio.h>

int main(){ 
    int num = 1, N; 
    scanf("%d", &N);
    while (num <= N){ 
        (num % 2)? printf("%d\n", num):0; 
        num++;                              //Has the same effect as ++num
    } 
    return 0;
}