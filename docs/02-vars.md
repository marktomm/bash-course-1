Below is a minor mod of the day2 and there are tasks for you betwenn <chatGPT> html elements

## Week 1, Day 2: Introduction to Bash Special Characters, Variables, and Processes

### Objective

Today, we dive into the fundamentals of Bash variables and processes. We will
also explore script files: how to create, source, and execute them.

### Special Characters and Variables

#### `$` - Variable Indicator

- **Purpose**: The `$` symbol is used in Bash to indicate a variable.

  **Example TO SET PROCESS LOCAL VARIABLE**:

```shell
variable="hello"
echo $variable
```

Output: `hello`

- **Note on `=` Symbol**: The `=` symbol is another special character in the context of variable assignment.
  It tells the shell that the string immediately preceding it is a variable name, and the string immediately
  following it is the value to assign to that variable. It is crucial that there are no spaces around the `=` symbol
  for proper variable assignment. For instance, `variable="hello"` is a valid assignment, while `variable = "hello"`
  would be incorrect and would cause Bash to attempt to execute `variable` as a command with `=` and `"hello"` as arguments.

### Understanding Script Files

#### Real-World Narrative: Automated Setup to begin working on the course

You, a Bash course student, need to set up your Linux workstation environment
before every lesson. To automate this task, you can create a file with command per each row.
This file is called a script file.

```shell
# setup_bash_course.sh
echo "Setting up work..."
cd ~/bash-course-1/
git pull
code . # or vsc . on Kali
```

#### Creating Script Files

- Use `touch` to create an empty script file, and make it executable using `chmod`.

```shell
touch setup_bash_course.sh
chmod +x setup_bash_course.sh # because file permissions
```

### Processes in OS

#### Understanding Processes

- **Shell is a process**: The shell is a process itself and spawns(forks) other processes when commands are executed.
- **Parent-Child Relationship**: Each spawned process is a child of the shell process.

#### ASCII Graphics Visualization

PID: Process ID

```
  init (PID 1)
  ├─── systemd (PID 2)
  │   ├─── NetworkManager (PID 900)
  │   ├─── dbus-daemon (PID 1000)
  │   └─── gdm3 (PID 1100)
  │       └─── gnome-shell (PID 1200)
  │           └─── gnome-terminal-server (PID 1300)
  │               └─── bash (PID 1400) [Local variable: variable="hello"]
  │                   └─── command1 (PID 1401)
  └─── other services and processes
```

```
init (PID 1)
├─── ...
    └─── bash (PID 1400) [Local variable: variable="hello"]
        └─── command1 (PID 1401)
```

```shell
# pro tip: run ps command with arguments -aux to view current processes on your machine and their PID (Process ID)
ps -aux
```

### Passing variables to child process

```shell
variable2="world"
export variable2
```

```
init (PID 1)
├─── ...
    └─── bash (PID 1400) [Local variable: variable="hello", Exported variable: variable2="world"]
        └─── command1 (PID 1401) [Inherited variable: variable2="world"]
```

#### Sourcing vs. Executing Script Files

- **Sourcing**: Executes the commands in the current shell session. Any changes
  to environment variables will be retained.

```shell
source setup_bash_course.sh
# or
. setup_bash_course.sh
```

- **Executing**: Spawns a new shell to run the script. Environment changes are
  lost when the new shell exits.

  `./setup_bash_course.sh`

### Commands to be Covered

- `export`: Export variables for child processes to inherit.
- `unset`: Remove variable or function names from the environment.
- `echo $SHELL`: Display the current shell.
- `echo $PWD`: Display the current working directory.
- `ps`: Process status. Syntax: `ps [options]`
- `pstree`: Display a tree of processes. Syntax: `pstree [options]`

This concludes the theory for Week 1, Day 2. In practice, we will execute the
commands covered today to solidify our understanding.
