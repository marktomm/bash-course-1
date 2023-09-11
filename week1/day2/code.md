## Week 1, Day 2: Practical Part with Tutor (Duration: 20 Minutes)

### Objective

To execute the commands and implement the functionalities discussed in the theory part to reinforce the understanding of Bash special characters, variables, processes, and script files.

### Environment Setup

1. Open your terminal application.
2. Navigate to your course directory using `cd ~/bash-course-1/`

### Activity 1: Understanding Special Characters and Variables

#### Task 1: Create and Echo a Variable

1. Run the following commands:

```shell
variable="hello"
echo $variable
```

**Expected Output**: `hello`

#### Task 2: Test the Importance of `=`

1. Run the following command and observe the error:

```shell
variable = "hello"
```

**Expected Output**: Syntax error or a command not found message.

### Activity 2: Working with Script Files

#### Task 3: Create and Run a Script File

1. Create a script file:

```shell
touch setup_bash_course.sh
```

2. Make the script executable:

```shell
chmod +x setup_bash_course.sh
```

3. Edit the script file and add the following lines:

```shell
echo "Setting up work..."
cd ~/bash-course-1/
git pull
```

4. Run the script file:

```shell
./setup_bash_course.sh
```

### Activity 3: Understanding Processes

#### Task 4: View Processes and Parent-Child Relationships

1. Run the `ps -aux` command:

```shell
ps -aux
```

2. Run the `pstree` command:

```shell
pstree
```

### Activity 4: Passing Variables to Child Processes

#### Task 5: Export Variable and Confirm Inheritance

1. Run the following commands:

```shell
variable2="world"
export variable2
```

2. Confirm the exported variable is available in a child shell:

```shell
bash
echo $variable2
```

**Expected Output**: `world`

### Activity 5: Sourcing vs. Executing Script Files

#### Task 6: Source the Script File

1. Source the script file and confirm that any environmental changes are retained:

```shell
source setup_bash_course.sh
```

or

```shell
. setup_bash_course.sh
```

#### Task 7: Execute the Script File

1. Run the script in a new shell:

```shell
./setup_bash_course.sh
```

Confirm that environment changes are not retained after the new shell exits.

---

This concludes the practical session for Week 1, Day 2.
