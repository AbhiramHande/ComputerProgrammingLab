gcc -c transpose.c
gcc -c transposeMain.c

gcc -o transpose.exe transpose.o transposeMain.o
./transpose.exe

rm *.o
rm transpose.exe