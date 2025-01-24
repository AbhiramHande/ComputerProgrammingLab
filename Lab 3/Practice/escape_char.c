/* CODE
    1. New line
    printf("Hello, World!\n");

    2. Tab
    printf("Hello,\tWorld!");

    3. Vertical Tab
    printf("Hello,\vWorld!");

    4. Backspce
    printf("Hello,\bWorld!");

    5. Bell
    printf("Hello, World!\a");

    6. Carriage Return
    printf("Hello, World!\r");
    printf("h");

    7. End of String
    printf("Hello\0World");
    return 0;

    8. Printing /, ' and "
    printf("\\Hello \'World\"");
    wait();
*/

#include <stdio.h>
#include <unistd.h>

void wait(){
    printf("\n");
    fflush(stdout);
    sleep(2);
}

int main() {
    //Escape characters
    //1. New line
    printf("1. Hello, World!");
    wait();
    //2. Tab
    printf("2. Hello,\tWorld!");
    wait();
    //3. Vertical Tab
    printf("3. Hello,\vWorld!");
    wait();
    //4. Backspce
    printf("4. Hello,");
    fflush(stdout);
    sleep(1);
    printf("\bWorld!");
    wait();
    //5. Bell
    printf("5. Hello, World!\a");
    wait();
    //6. Carriage Return
    printf("6. Hello, World!\r");
    fflush(stdout);
    sleep(1);
    printf("6. h");
    wait();
    //7. End of String
    char str[] = "7. Hello\0World";
    printf("%s", str);
    wait();
    //8. Printing /, ' and "
    printf("8. \\Hello \'World\"");
    wait();
    //8. Unicode
    printf("Other fun stuff you can do: \U0001F600");
    wait();
    return 0;
}
