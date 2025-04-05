gcc -c circle.c
gcc -c circle_main.c

gcc -o circle.exe circle.o circle_main.o

./circle.exe

rm *.o
rm circle.exe