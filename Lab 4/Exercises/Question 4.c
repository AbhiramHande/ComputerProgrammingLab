#include <stdio.h>

int main(){
    char a, b;
    printf("Enter the first character: ");
    scanf("%c", &a);
    printf("Enter the second character: ");
    scanf("\n%c", &b);

    int sum = (int)a + (int)b;
    printf("The ASCII sum of the two characters is %d\n", sum);
    return 0;
}