gcc -c student.c
gcc -c main.c

gcc -o exe main.o student.o
./exe

rm -f *.o
rm exe