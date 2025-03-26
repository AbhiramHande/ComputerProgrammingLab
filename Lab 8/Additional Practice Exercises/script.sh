gcc -c check_answers.c

echo "Checking answers of student 1"
gcc -c student1.c
gcc -o exe student1.o check_answers.o
./exe

echo ""
echo "Checking answers of student 2"
gcc -c student2.c
gcc -o exe student2.o check_answers.o
./exe

echo ""
echo "Checking answers of student 3"
gcc -c student3.c
gcc -o exe student3.o check_answers.o
./exe

rm -f *.o
rm -f exe
