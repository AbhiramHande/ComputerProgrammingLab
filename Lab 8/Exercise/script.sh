echo "Compiling driver with left to right search"
gcc -c search_L2R.c  
gcc -c search_main.c  
gcc -o search_L2R.exe search_L2R.o search_main.o  
./search_L2R.exe

echo ""
echo "Compiling driver with right to left search"
gcc -c search_R2L.c   
gcc -o search_R2L.exe search_R2L.o search_main.o  
./search_R2L.exe

rm -f *.o
rm -f *.exe