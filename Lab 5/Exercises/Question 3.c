#include <stdio.h>

int main(){
    int num1, num2, num3, num4;
    int max1, max2, sum;
    printf("Enter the four numbers: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);

    if(num1 > num2){
        if(num2 > num3){
            max1 = num1;
            if(num2 > num4)
                max2 = num2;
            else
                max2 = num4;
        }
        else if(num1 > num3){
            max1 = num1;
            if(num3 > num4)
                max2 = num3;
            else
                max2 = num4;
        }
        else{
            max1 = num3;
            if(num4 > num1)
                max2 = num4;
            else
                max2 = num1;
        }
    }
    else{
        if(num1 > num3){
            max1 = num2;
            if(num1 > num4)
                max2 = num1;
            else
                max2 = num4;
        }
        else if(num2 > num3){
            max1 = num2;
            if(num3 > num4)
                max2 = num3;
            else
                max2 = num4;
        }
        else{
            max1 = num3;
            if(num4 > num2)
                max2 = num4;
            else
                max2 = num2;
        }
    }

    printf("%d + %d = %d\n", max1, max2, max1 + max2);
    return 0;
}