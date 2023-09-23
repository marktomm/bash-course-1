# 1

Process: Instructions that are being executed by the PC at the current time.

# 2

Every directory has two direcotries named `.` and `..`. First `.` is a special name for current directory. Second `..` is a special name for the previous directories.

# 3

A shell program waits for user input indefinetly. Upon receiving new line of input, the shell starts reading in character by character until it encounters a special character `space character`. First `space character` is used as separator between the *command* being requested by the user from the shell and the arguments that are passed on to the *command*.

# 4

The shell has a list of directories (separated by `:` colon) where it searches for the *commands* (i.e. applications to run). To view it input the following command to the shell `echo $PATH`.

# 5

When shell has done searching for the first `space char` it looks at the name of the *command* for `/` 'forward slash' char in the name. If such is encountered the shell does not search for *command* in `$PATH` (`:` separated list), but instead attempts to execute the *command* as if it somewhere with relation to current directory.

I.e.

```shell
pwd # shows /home/user
bash-course1/scripts/test # shell expects an executable file to be here: /home/user/bash-course1/scripts/test 
```

# 5.1

If the `/` char is the first character in the name of the *command*, then regardless of the current dir (`pwd`), the shell expects the executable file to be beginning from the root of the file system.

```shell
pwd # shows /home/user
mkdir somefolder
cd somefolder # assuming such exists
/home/user/bash-course1/scripts/test
```

# 6

In each directory there is a directory named `.` with is a substitute for the current directory. To instruct the shell to execute a program in the current dir:

```shell
pwd # shows /home/user
cd bash-course1/scripts/
./test
```

The valid way of doing this is to prepend `./` to the executable file name in current dir. This is a hack to bypass the shells "search in `$PATH`" mechanism using `/` character.

# 7

This is ok:

```shell
pwd # shows /home/user
cd bash-course1/scripts/
../scripts/test
../../bash-course1/scripts/test
../../../user/bash-course1/scripts/test
```