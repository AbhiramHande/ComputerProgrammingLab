#include "answer.h"

int answer(unsigned int question_num) {
    int answers[] = {15, 10, 2, 4};
    
    if(question_num < 5)
        return answers[question_num - 1];
    else 
        return 0; // Error
}