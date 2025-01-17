#!/bin/bash

# 1. How do you make the system print out the name of your home directory?
echo ~

# 2. What is the parent directory of your home directory?
cd ~
cd ..
pwd

# 3. Make a directory called dir1 under your home directory.
cd ~
mkdir dir1

# 3.a. Change to this directory.
cd ~/dir1

# 3.b. Make three empty files: file1 file2 and file3 under the current directory.
touch file1 file2 file3

# 3.c. Make a sub-directory called dir1-1 under the current directory.
mkdir dir1-1

# 4. Draw the file structure of the existent files and directories under your home directory.
ls -R ~

# 5. Remove the subdirectory dir1-1.
rmdir dir1-1

# 6. Try now removing dir1
rmdir ~/dir1

# 7. Store the list of all the files and directories (using ls long listing) in a file called dirfile.
ls -l > dirfile

# 8. Display the contents of dirfile on the screen using the cat command
cat dirfile

# 9. Store in a file called userlist the list of users who are currently logged into the system
who | cut -d ' ' -f1 > userlist

# 10. Combine the contents of dirfile and userlist and store in the file called file1
cat dirfile userlist > file1

# 11. Print the number of lines, words and characters in file1 using the wc command.
wc -lwm file1

# 12. Copy the contents of file1 into file2.
cp > file2

# 13. Append the following two lines into file2:
#            This is file2.
#            And I am using Linux!
echo 'This is file2' >> file2
echo 'And I am using Linux!' >> file2
