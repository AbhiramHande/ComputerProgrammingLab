#include "answer.h"

int answer(unsigned int question_num) {
    int answers[] = {5, 10, 0, 4};

    if(question_num < 5)
        return answers[question_num - 1];
    else
        return 0; // Error
}