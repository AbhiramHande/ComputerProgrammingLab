#include <stdio.h> 

void func(void); 

int main(void){   
    int i=5; 
    for(i=i+1; i<8; i++)        
        func(); 
}

void func(void){   
    int j; 
    for(j=1; j<3; j++)         
        printf("%d\t", ++j);     
}

/*
 * In the main function's for loop i starts at 6
 * Thus, the for loop will run twice (once for 6 and once for 7)
 * 
 * In the func function's for loop j starts at 1
 * In the body of the loop, j is incremented to 2 and prints 2
 * When re-entering the loop, j is incremented to 3 and loop condition fails
 * 
 * So, in total, the function prints two 2's.
 */