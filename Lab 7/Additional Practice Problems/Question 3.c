#include <stdio.h>

void sort(int array[], int size){
    for(int i = 0; i < size; i++){
        int max_index = i;
        for(int j = i+1; j < size; j++)
            if(array[max_index] < array[j])
                max_index = j;

        if(max_index != i){
            int temp = array[i];
            array[i] = array[max_index];
            array[max_index] = temp;
        }
    }

    return;
}

int main(){
    int size = 0;
    printf("Enter Number of elements: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements: ");
    for(int i = 0; i < size; i++)
        scanf(" %d", &array[i]);
    
    sort(array, size);

    float median = array[size / 2];
    if(size % 2 == 0){
        median += array[(size / 2) - 1];
        median /= 2.0;
    }

    float mean = 0;
    for(int i = 0; i < size; i++)
        mean += array[i];
    mean /= size;

    printf("The mean is %f.\n", mean);
    printf("The median is %f.\n", median);
}