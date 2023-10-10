# Understanding the Difference between Sourcing and Executing in Bash

This material is designed to elaborate on the differences between sourcing a Bash script and executing it. Both theories and practical examples are covered.

---

## Section 1: Executing a Script

### Objective
To understand what it means to execute a Bash script and its implications.

### Theory
- Executing a script launches a new shell.
- Changes made in the script, like setting variables, will not affect the parent shell.
- It's a child process of the terminal.

### Code Example
```shell
bash my_script.sh
```

### Practice
1. Create a script that declares a variable and prints it.
2. Execute the script and verify the variable is not available in the parent shell.

---

## Section 2: Sourcing a Script

### Objective
To comprehend what sourcing a script is and its impact.

### Theory
- Sourcing a script runs the script in the current shell.
- Variables and functions defined in the script are available in the current shell.
- Useful for setting environment variables or defining functions for later use.

### Code Example
```shell
source my_script.sh
# or
. my_script.sh
```

### Practice
1. Create a script that sets an environment variable.
2. Source the script and verify the environment variable is available in the current shell.

---

### Comparison Table

| Aspect              | Executing           | Sourcing            |
|---------------------|---------------------|---------------------|
| New Shell Launched  | Yes                 | No                  |
| Variable Persistence| No                  | Yes                 |
| Syntax              | `bash script.sh`    | `source script.sh`  |
| Alternative Syntax  | --                  | `. script.sh`       |

---

## End of Material

By the end of this material, the learner should be able to distinguish between sourcing and executing a script, understanding the use-cases and implications of each.


# Functions in Bash Scripting

---

## Section 1: Introduction to Functions

### Objective
To understand what a function is and why it is used in Bash scripting.

### Theory
- Functions are reusable blocks of code.
- Improve code readability and maintainability.
  
### Code Example
```shell
function hello_world {
  echo "Hello, world!"
}
```
  
### Practice
1. Declare a simple function that prints "Hello, world!".
2. Call the function multiple times.

---

## Section 2: Positional Parameters

### Objective
To learn how to pass arguments to functions.

### Theory
- `$1`, `$2`, `$n` represent the first, second, and nth arguments.
- `$@` holds all arguments as an array.
  
### Code Example
```shell
function greet {
  echo "Hello, $1!"
}
```
  
### Practice
1. Write a function that takes a name as an argument and greets the person.
2. Pass multiple names and greet them all.

---

## Section 3: Return Values

### Objective
To understand how to return values from a function.

### Theory
- Use `return` to exit and specify a return code.
- Capture the function’s `stdout` to get complex return types.
  
### Code Example
```shell
function get_date {
  echo "$(date)"
}
```
  
### Practice
1. Write a function that returns the current date.
2. Capture the return value and echo it.

---

## Section 4: Local Variables

### Objective
To understand the scope of variables in functions.

### Theory
- `local` keyword makes a variable local to the function. The `x` below cannot be acessed outside the function
  
### Code Example
```shell
function set_var {
  local x=10
  echo "Inside function: x=$x"
}
```
  
### Practice
1. Create a function with a local variable.
2. Test the scope of the local variable.

---

## Section 5: Function Export

### Objective
To learn how to export functions.

### Theory
- Use `export -f` to make a function available to child processes.
  
### Code Example
```shell
export -f hello_world
```
  
### Practice
1. Export a function and call it in a sub-shell.

---

## End of Tutor Material

This comprehensive guide aims to give an in-depth understanding of functions in Bash scripting. Following this guide should help in mastering the topic.
