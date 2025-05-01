#include <stdio.h>

int main(){
    int x = 12;
    float f = 234.5678;
    char ch = 'Y';

    // 5 denotes the minimum width of the number to be printed
    // d is used to specify that the number being printed is an integer
    // So here it will print "   12" (3 spaces followed by '1' and '2')
    printf("%5d\n", x);

    // - sign denotes the left alignment of the number (as opposed to the usual right alignment)
    // 5 denotes the minimum width of the number to be printed
    // d is used to specify that the number being printed is an integer
    // So here it will print "12   " ('1' and '2' followed by three spaces)
    printf("%-5d\n", x);

    // - sign denotes the left alignment of the number (as opposed to the usual right alignment)
    // 8 denotes the minimum width of the number to be printed
    // .2 denotes the precision of the float (so any number with more than 2 decimal places is rounded off)
    // f is used to specify that the number being printed is a float
    // So here it will print "234.57  " (234.5678 is rounded up to 234.57 and three extra spaces are added at the end)
    printf("%-8.2f\n", f);

    // + sign forces the number to be printed with the sign
    // 8 denotes the minimum width of the number to be printed
    // .2 denotes the precision of the float (so any number with more than 2 decimal places is rounded off)
    // f is used to specify that the number being printed is a float
    // So here it will print " +234.57" (a space followed by +234.57)
    printf("%+8.2f\n", f);

    // + sign forces the number to be printed with the sign
    // - sign denotes the left alignment of the number (as opposed to the usual right alignment)
    // 8 denotes the minimum width of the number to be printed
    // .2 denotes the precision of the float (so any number with more than 2 decimal places is rounded off)
    // f is used to specify that the number being printed is a float
    // So here it will print "+234.57 " (+234.57 followed by a space)
    printf("%+-8.2f\n", f);

    // c is used to specify that the number being printed is a char
    printf("%c\n", ch);

    return 0;
}