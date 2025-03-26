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

    int unique_elements = 1;
    for(int i = 1; i < size; i++)
        if(array[i] != array[i-1])
            unique_elements++;
        
    int unique_array[unique_elements];
    int frequency[unique_elements];

    unique_array[0] = array[0];
    frequency[0] = 1;

    int j = 0;
    for(int i = 1; i < size; i++){
        if(array[i] != array[i-1]){
            j++;
            unique_array[j] = array[i];
            frequency[j] = 1;
        }
        else
            frequency[j]++;
    }

    for(int i = 0; i < unique_elements; i++)
        printf("%d occured %d times.\n", unique_array[i], frequency[i]);
}