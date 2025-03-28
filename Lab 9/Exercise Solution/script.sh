gcc -c book_fun.c
gcc -c main_library.c
gcc -c books_catalog.c

gcc -o exe book_fun.o main_library.o books_catalog.o
./exe 

rm -f *.o
rm -f exe