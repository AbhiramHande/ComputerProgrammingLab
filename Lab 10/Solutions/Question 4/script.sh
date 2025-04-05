gcc -c reverseArray_main.c
gcc -c reverseArray_PassByPointers.c
gcc -c reverseArray_PassByReference.c

gcc -o reverse.exe reverseArray_main.o reverseArray_PassByPointers.o reverseArray_PassByReference.o

./reverse.exe 

rm *.o
rm reverse.exe