Below is a minor mod of the day2 and there are tasks for you betwenn <chatGPT> html elements

## Week 1, Day 2: Introduction to Bash Special Characters, Variables, and Processes

### Objective

Today, we dive into the fundamentals of Bash variables and processes. We will
also explore script files: how to create, source, and execute them.

### Special Characters and Variables

#### `$` - Variable Indicator

- **Purpose**: The `$` symbol is used in Bash to indicate a variable.

  **Example TO SET PROCESS LOCAL VARIABLE**:
  `variable="hello"`
  `echo $variable`
  Output: `hello`

### Processes in Shell

#### Understanding Processes

- **Processes in a Shell**: The shell is a process itself and spawns other processes when commands are executed.
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
  │                   ├─── command1 (PID 1401)
  │                   └─── command2 (PID 1402)
  └─── other services and processes

```

```
init (PID 1)
├─── ...
    └─── bash (PID 50) [Local variable: variable="hello"]
        ├─── command1 (PID 51)
        └─── command2 (PID 52)
```

```shell
# pro tip: run ps command with argument aux to view current processes on your machine and their PID (Process ID)
ps aux
```

### Understanding Script Files

#### Real-World Narrative: Automated Work Environment Setup

John, a DevOps engineer, needs to set up his Linux workstation environment
every morning when he logs in. To automate this task, he has created a script
file with all the necessary commands.

`# setup_environment.sh`
`echo "Setting up environment..."`
`cd ~/work_project/`
`git pull origin master`
`./build.sh`

#### Creating Script Files

- Use `touch` to create an empty script file, and make it executable using `chmod`.

  `touch setup_environment.sh`
  `chmod +x setup_environment.sh`

#### Sourcing vs. Executing Script Files

- **Sourcing**: Executes the commands in the current shell session. Any changes
  to environment variables will be retained.

  `source setup_environment.sh`
  `# or`
  `. setup_environment.sh`

- **Executing**: Spawns a new shell to run the script. Environment changes are
  lost when the new shell exits.

  `./setup_environment.sh`

### Commands to be Covered

- `export`: Export variables for child processes to inherit.
- `unset`: Remove variable or function names from the environment.
- `echo $SHELL`: Display the current shell.
- `echo $PWD`: Display the current working directory.
- `ps`: Process status. Syntax: `ps [options]`
- `pstree`: Display a tree of processes. Syntax: `pstree [options]`

This concludes the theory for Week 1, Day 2. In practice, we will execute the
commands covered today to solidify our understanding.
