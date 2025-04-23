rm exe 2> /dev/null

gcc -c linkedList.c
gcc -c main.c

gcc -o exe linkedList.o main.o

rm *.o 2> /dev/null