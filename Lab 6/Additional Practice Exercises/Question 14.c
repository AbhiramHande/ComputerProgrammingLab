long factorial(long num){
    if(num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    long result = factorial(number);
    printf("The result is %ld\n", result);
    return 0;
}