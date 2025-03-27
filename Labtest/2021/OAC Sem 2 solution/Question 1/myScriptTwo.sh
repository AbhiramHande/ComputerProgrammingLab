gcc -c main_pizza.c
gcc -c pizza_menuNew.c
gcc -c pizza_prop.c

gcc -o q1_descending.exe main_pizza.o pizza_menuNew.o pizza_prop.o
./q1_descending.exe

rm *.o
rm q1_descending.exe