gcc -c main_pizza.c
gcc -c pizza_menu.c
gcc -c pizza_prop.c

gcc -o q1_ascending.exe main_pizza.o pizza_menu.o pizza_prop.o
./q1_ascending.exe

rm *.o
rm q1_ascending.exe