#include <stdio.h>

#define NAME_LENGTH 64

int main(){
    int questions;
    printf("Enter the number of questions: ");
    scanf("%d", &questions);

    char answer_key[questions + 1];
    printf("Input the key\nKey = ");
    scanf("%s", answer_key);
    answer_key[questions] = '\0';

    while(1){
        int marks = 0;
        char next;
        char name[NAME_LENGTH];
        char student_answer[questions + 1];
        
        printf("\nInput the name of the student: ");
        scanf("%s", name); 
        printf("Input response of %s: ", name); 
        scanf("%s", student_answer);
        student_answer[questions] = '\0';

        for(int i = 0; i < questions; i++)
            if(student_answer[i] == answer_key[i])
                marks++;

        printf("Marks obtained by %s is = %d out of %d.\n", name, marks, questions); 
        
        printf("Do you want to evaluate another student (y/N): ");
        scanf(" %c", &next);

        if(next != 'Y' && next != 'y')
            break;
    } 
    
    printf("Googbye!\n");
    return 0;
}
