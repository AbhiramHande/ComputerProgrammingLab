# Labsheet 1 - Explanation

The solutions to the review questions are mentioned at the end. The explanation to posted solution is also provided, but to better understand it, we need to first cover some additional concepts. While the labsheets cover most of the topics, the following extra information could be useful (especially for understanding the posted shell commands):

### Quotes:
You would have noticed that many spaces, tabs and newlines act as delimiters, i.e. they sepearte commands or the arguments to those commands. So what if one of these charachters are a part of the command's arguments? This is where we use single-quotes(`'`), double-quotes(`"`) and backslash(`\`). The quotes preserve whatever is written inside it. E.g. Take a look at the following logs:
```bash
~$ echo hello      world
hello world
~$ echo 'hello      world'
hello      world
```
In the first case, the command `echo` is called with two different arguments/parameters: `hello` and `world`. Therefore, it prints them on the screen one after the other, separated by a space. On the other hand, in the second run, the entire string `hello      world` (with all its spaces) is treated as a single argument and passed to the `echo` command.

(**Note:** Double quotes has some more functionality, but that is not essential at this stage.)

### Escape Character:
The backslash(`\`) works as an escape character. TIt allows you to preserve the next character, meaning it is ignored for the parsing of the command. E.g. Suppose your home directory contains a folder named `C Programming`. Here's what happens when you try to navigate to it:
```bash
~$ cd C Programming
bash: cd: too many arguments
~$ cd C\ Programming
~/C Programming$
```
In the first case, executing `cd` without using the backslash will return an error. This is because the change directory command expects only one argument, i.e. the path you wish to navigate to. Passing `C Programming` without the backslash essentially passes two arguments to the `cd` command: `C` and `Programming`. However, in the second case, the the space not counted as a delimiter as it follows a backslash. So, only `C Programming` is passed as a single argument to the `cd` command. Alternatively one could have done the following:
```bash
~$ cd 'C Programming'
~/C Programming$ cd ~
~$ cd "C Programming"
~/C Programming$
```

### Output Redirection
The `>` is used to redirect the output to a file. You can go through the [Labsheet 2](https://github.com/AbhiramHande/ComputerProgrammingLab/blob/main/Lab%202/Lab%20Sheet%202.pdf) to understand redirection of standard output. 

## Solution Explanation:

`#!/bin/bash` is a shebang (or hashbang) which tells the system that the script should be executed using the Bash shell. It is used at the beginning of shell scripts to indicate the interpreter that should run the script. In a shell script, the entire line after a `#` is ignored. So, this is **NOT** a command. Look at the last section to understand shell script files better.

```bash
touch f1.txt
```
The above shell command is used to create an empty file in this case. The `touch` command is used to modify access time and file permissions. 
- If the requested file does not exist, `touch` will create the file.
- If the file already exists, `touch` will update the last access time and last modification time of the file to the current system time, but it won't change the file's contents. 
- Using various flags the action of `touch` command can be further customized. 

You can also also use `cat > f1.txt` and then press `Ctrl + D` to terminate writing nothing into the file. It is quite to important to note that pressing `Ctrl + Z`, `Ctrl + C`, etc. will also get the job done, but it is **not the correct** way to do it. 
- `Ctrl + C` interrupts and terminates the current running process.
- `Ctrl + Z` suspends the current foreground process and send it to the background. 
- `Ctrl + D` on the other hand is used to signal the end of input or to exit the current shell or terminal session. 
- `Ctrl + <other characters>` also have meanings and interesting use cases that one can lookup.

```bash
echo "CS F111: Computer Programming
CS F211: Data Structures and Algorithm
CS F212: Database Systems
CS F213: Object Oriented Programming
CS F214: Logic in Computer Science
CS F215: Digital Design
CS F241: Microprocessor Programming and Interfacing
CS F301: Principles of Programming Languages
CS F342: Computer Architecture
CS F372: Operating Systems" > f2.txt
```
The above code uses quotes to redirect 10 lines of desired input to a file `f2.txt`. The rest must be rather self explanatory and you can look up the [Labsheet](https://github.com/AbhiramHande/ComputerProgrammingLab/blob/main/Lab%201/Lab%20Sheet%201.pdf) if you are stuck.

**Note:** Although you can always use a relative path, it is generally better to use an absolute path. Absolute paths are more rigid and less prone to errors, especially when navigating complex directory structures. They provide the full path from the root directory, ensuring consistency regardless of the current working directory. (I am also guilty of using relative paths sometimes in the provided solution, but all I am trying to say is that using absolute path is a better practice.)

## Answers to the Review Questions
1. `cd ~` changes the present working directory to the home directory. In a filepath, `~` is replaced by the path to the home directory, which is set in the envirnoment varibale `HOME`.
2. `mkdir` is used to create a single directory. Adding the `-p` flag helps ensure that any parent directory, if they don't already exist, is also created.
3. `rm` command is used to remove files in a directory, while `rmdir` is used to delete an **empty** directory. Adding the `-r` flag to the `rm` command allows one to `recursively` delete all files and subdirectories within the specified directory and the directory itself.
4. There a two ways one can do this:
```bash
cat f1.txt f2.txt > f3.txt
```
If multiple files are passed as arguments to `cat` command, thier contents will be printed one after the other. This is output is then redirected to the required file (`f3.txt`). Another way of doing this is:
```bash
cat f1.txt > f3.txt
cat f2.txt >> f3.txt
```
The `>>` is used to redirect the output to a file, but instead of rewriting the destination, it is simply appended at the end. In this case, `cat f1.txt > f3.txt` will overwrite(create if it doesn't exist) `f3.txt` with the contents of `f1.txt`, and `cat f2.txt >> f3.txt` will append the contents of `f2.txt` to `f3.txt` (without overwriting it).

## Shell Scripts
A `.sh` file is a **shell script** written for a Unix-based shell environment, typically **Bash (Bourne Again Shell)**. It contains a sequence of shell commands that the system executes in order, automating tasks or processes that would otherwise require manual input in the terminal. Shell scripts are often used for file manipulation, program execution, system monitoring, and other repetitive tasks.

A `.sh` file typically consists of:
1. Shebang (`#!/bin/bash`): Not necessary
2. Commands
3. Comments: Lines starting with `#` are comments and are not executed.

A shell script can also contain variables, control-flow structures (loops and conditionals), and functions. The given solution [exercise.sh](https://github.com/AbhiramHande/ComputerProgrammingLab/blob/main/Lab%201/exercise.sh) is a shell script used to automate the exercise in Labsheet 1. Some of the ways to run the script files are:
```bash
bash script.sh
```
or 
```bash
sh script.sh
```
Shell scripts will be covered in more detail in future labs. You can refer to those labsheets as you encounter more advanced topics and exercises. The solution script provided is a good starting point for understanding how shell scripts can automate tasks.
