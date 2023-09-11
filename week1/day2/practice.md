# Week 1, Day 1 & Week 1, Day 2: Individual Practice Session (Duration: 30 Minutes x 2)

## Session 1 (Duration: 30 Minutes)

### Objective

To reinforce your understanding of basic Bash commands, special characters, and the anatomy of a Bash script.

### Activity 1: Basic Bash Commands (10 Minutes)

1. Navigate to your home directory and list its contents:

```shell
cd ~
ls
```

2. Create a directory named `practice_session_1`:

```shell
mkdir practice_session_1
```

3. Change the directory to `practice_session_1` and create a file named `text1.txt`:

```shell
cd practice_session_1
touch text1.txt
```

### Activity 2: Variables and Special Characters (10 Minutes)

1. Declare a variable `greeting` and assign it a value:

```shell
greeting="Hello, World!"
```

2. Echo the value of `greeting`:

```shell
echo $greeting
```

3. Try to assign a value to `greeting` with spaces around the `=` character and observe the output:

```shell
greeting = "Hello, World!"
```

### Activity 3: Bash Script Anatomy (10 Minutes)

1. Create a Bash script named `hello_world.sh`:

```shell
touch hello_world.sh
```

2. Add the following lines to `hello_world.sh`:

```shell
#!/bin/bash
echo "Hello, World!"
```

3. Make the script executable and run it:

```shell
chmod +x hello_world.sh
./hello_world.sh
```

---

## Session 2 (Duration: 30 Minutes)

### Objective

To strengthen your understanding of processes, parent-child relationships, and shell variables across processes.

### Activity 1: Processes (10 Minutes)

1. Run the `ps -aux` command to list current processes:

```shell
ps -aux
```

2. Run the `pstree` command to display the process tree:

```shell
pstree
```

### Activity 2: Environment Variables and Child Processes (10 Minutes)

1. Declare a variable `temp` and export it:

```shell
temp="Exported Variable"
export temp
```

2. Spawn a new shell and echo the variable `temp`:

```shell
bash
echo $temp
```

### Activity 3: Script Execution (10 Minutes)

1. Modify `hello_world.sh` to include a variable:

```shell
#!/bin/bash
greeting="Hello, World!"
echo $greeting
```

2. Run the script in two ways and observe the difference:

- Sourcing the script:

```shell
source hello_world.sh
```

- Executing the script:

```shell
./hello_world.sh
```

---

This concludes your individual practice sessions for Week 1, Day 1 & Week 1, Day 2.
