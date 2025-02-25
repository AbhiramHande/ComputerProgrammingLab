#include<stdio.h> 

void func(int a,int b); 

int main(void) {  
    int x; 
    x = func(2,3);          //Function is declared as void so it will not return anything. Thus, it will cause a compilation error.
    return 0; 
}  

void func(int a,int b) {  
    int s; 
    s=a+b; 
    return;    
}