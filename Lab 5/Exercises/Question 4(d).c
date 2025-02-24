#include <stdio.h>

int main(){ 
    int N; 
    scanf("%d", &N);
    for(int num = 1; num <= N; num += 2)
        printf("%d\n", num); 
    return 0;
}