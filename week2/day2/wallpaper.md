# 1 

Redirect stdout (fd 1) ot a process by using `>` symbol. The **greater than** symbol `>` is a special character that the shell uses to redirect **stdout** (standard output).

```shell
echo "Hello" >file.txt
```

Anything directly after the `>` symbol is considered the target path

```shell
echo "Hello" > file.txt # space allowed
```

# 2

Redirect stderr to stdout

```shell 
grep GG somfile 2>&1
```

```shell
grep GG somefile > /tmp/gg 2>&1
```