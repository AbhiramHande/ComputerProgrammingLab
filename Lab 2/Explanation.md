# Labsheet 2 - Explanation

The explanation to posted solution is also provided, but to better understand it, we need to first cover some additional concepts. While the labsheets cover most of the topics, the following extra information could be useful (especially for understanding the posted shell commands):

### `cut` command
The **`cut`** command in Linux is a useful tool for processing and extracting specific columns or fields from text files or standard input. It's often used to isolate particular parts of a file or output.

#### Flag Options:

1. **`-f` (Field)**: This option specifies which fields to extract from the input. Fields are usually separated by a delimiter (e.g., a tab or a space).
2. **`-d` (Delimiter)**: This option defines the delimiter that separates fields. By default, `cut` assumes fields are separated by a tab character, but you can specify a different delimiter.
3. **`-c` (Character)**: This option extracts specific characters from each line, rather than fields.
4. **`-s` (Suppress lines without delimiter)**: If you’re using a delimiter, this option ensures that lines without the delimiter are ignored, avoiding output for those lines.

#### Examples
  - `cut -f 1` extracts the first field from each line.
  - `cut -f 1,3` extracts the first and third fields.
  - `cut -d ',' -f 2` will extract the second field from lines in a comma-separated file.
  - `cut -c 1-5` extracts the first 5 characters from each line.
  - `cut -d ',' -f 2 -s` will ignore lines that don’t contain a comma.

## Solution Explanation:

As mentioned previously, the shebang (`#!/bin/bash`) at the start of the script instructs the Linux operating system to execute the script using the Bash shell.

```bash
ls -R ~
```
In the above command, the `-R` flag stands for "recursive," and it is used to list all files and directories within the home directory and all its subdirectories.

```bash
rmdir dir1-1 2> ~/error.txt
rmdir ~/dir1 2>> ~/error.txt
```
The above commands are used to remove the specified directories and redirect any error to a file `error.txt` in the home directory.
The redirection of standard error is completely optional. 
- During execution, no error will be raised by the first command(`rmdir dir1-1`) when attempting to delete `dir1-1` as it is empty. 
- However, in the second command(`rmdir ~/dir1`), an error will occur as `dir1` contains some files (specifically `file1`, `file2`, and `file3`), and this error will be appended to the `error.txt` file present in home directory. 

```bash
who | cut -d ' ' -f1 > userlist
```
The `who` command is used to list all the users. However along with the users, various other information (such as terminal and last access time) will also be listed, seprated by tabs or spaces. The `cut` command splits each line of the `who` output using space as the delimiter (specified by `-d ' '`) and selects the first field (specified by the flag `-f1`), which corresponds to the username.

**Note:** The information in the `who` output is typically separated by spaces or tabs. The command in the solution is configured to handle spaces, but if your output contains tabs, you might need to adjust the delimiter accordingly (use `-d $'\t'`).

The rest of the exercises should be relatively straightforward, but if you encounter any issues, feel free to refer to the [Labsheet](https://github.com/AbhiramHande/ComputerProgrammingLab/blob/main/Lab%202/Lab%20Sheet%202.pdf) for further details.
