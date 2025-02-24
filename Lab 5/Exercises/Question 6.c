#include <stdio.h>

int main(){
    printf("Enter input rows: ");
    int rows;
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= 2*rows - 1; j++){
            if(i == 1 || j == i || j == 2*rows - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}