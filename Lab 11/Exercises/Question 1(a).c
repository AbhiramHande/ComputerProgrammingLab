#include <stdio.h>

void fun1(int array[10]){
    array[0] ^= array[9];
    array[9] ^= array[0];
    array[0] ^= array[9];

    return;
}

int main(){
    int array[10];
    printf("Enter 10 elements:\n");
    for(int i = 0; i < 10; i++)
        scanf(" %d", array + i);
    
    fun1(array);
    for(int i = 0; i < 10; i++)
        printf("%d ", array[i]);
    printf("\n");
}