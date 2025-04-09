#include <ctype.h>
#include <stdio.h>

#define STRING_LENGTH 256

int is_vowel(char c){
    if(!isalpha(c)) return 0;

    switch(c) {
        case 'A': return 1;
        case 'E': return 1;
        case 'I': return 1;
        case 'O': return 1;
        case 'U': return 1;
        case 'a': return 1;
        case 'e': return 1;
        case 'i': return 1;
        case 'o': return 1;
        case 'u': return 1;
        default: return 0;
    }
}

int is_consonent(char c){
    if(isalpha(c) && !is_vowel(c))
        return 1;
    else
        return 0;
}

void count_string(char* string){
    int vowel_count = 0;
    int consonent_count = 0;
    for(int i = 0; string[i] != '\0'; i++){
        if(is_vowel(string[i]))
            vowel_count++;
        else if(is_consonent(string[i]))
            consonent_count++;
    }

    printf("There are %d vowels in the given string.\n", vowel_count);
    printf("There are %d consonents in the given string.\n", consonent_count);
    return;
}

int main(){
    char string[STRING_LENGTH];
    printf("Enter a string: ");
    scanf("%s", string);
    count_string(string);
}
