#include <stdio.h>
#include "answer.h"

int main(){
    int answer_key[] = {5, 10, 0, 4};
    int correct_answers = 0;

    for(int i = 0; i < NUMBER_OF_QUESTIONS; i++)
        if(answer(i + 1) == answer_key[i])
            correct_answers++;

    printf("Student answer %d / 4 questions correctly.\n", correct_answers);
    return 0;
}