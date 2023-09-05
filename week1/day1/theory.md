## Week 1, Day 1: Introduction to Terminal and Shell

### Objective
The objective of today's lesson is to provide a comprehensive understanding of what a terminal and shell are, their historical background, and their interrelationship. 

### Terminal: A Deep Dive
- **Historical Context**: Originally, a terminal was a physical device—a screen and keyboard connected to a mainframe. Think of it as a remote control to a more powerful machine.
- **Modern Analogy**:Today's terminal is like a chat interface between you and the OS. Which means that it just sends the messages back and forth. You type commands and the OS responds, similar to a chat.
- **Device File Representation**: In Linux, the terminal is abstracted as a device file that can accept and send characters. For example, `/dev/tty` for hardware terminals or `/dev/pts/0` for emulated terminals.
- **Functional Description**: A terminal essentially enables programs to read characters from the keyboard and send characters to display on the screen.

### Shell: More Than a Command Interpreter
- **Definition**: A shell is a specialized program designed to read commands and execute them. It serves as an intermediary between the user and the OS.
- **Shell goal as a program**: Provide a way for user (you) to launch programs by writing "code" (program_name followed by space and any arguments)
- **Workflow**: 
  1. Reads character strings from the terminal (or another source).
  2. Treats the first word up to a space as a command.
  3. Treats the words following the first as arguments.
  4. Executes the command, usually by forking and running a new process, passing along the arguments.
- **Connection with Terminal**: When a terminal starts, it is associated with a *special* file (called character device file).
This file serves as a communication channel, providing input and output. The terminal enables echoing back 
to the user in that *special* file. A shell process is then initiated and attached to the same file.

### The Interrelationship: Terminal and Shell
- **Terminal as an I/O Mechanism**: Terminal handles I/O, feeding user input to the shell, and displaying output from the shell.
- **Shell as the Business Logic**: Shell processes commands.

### Commands to be Covered

- `echo`: Output text to the terminal. Syntax: `echo string_or_$variable`
- `pwd`: Print working directory to terminal. Syntax: `pwd`
- `cd`: Change directory. Syntax: `cd directory`
- `ls`: List directory contents. Syntax: `ls [options] [file_or_directory ...]`
- `mkdir`: Create new directory. Syntax: `mkdir directory`
- `rmdir`: Remove empty directory. Syntax: `rmdir directory`
- `rm`: Remove files or directories. Syntax: `rm [options] file_or_directory ...`
- `touch`: Create an empty file. Syntax: `touch file ...`
- `cat`: Display file contents. Syntax: `cat [options] file ...`
- `more`: Display file one screen at a time. Syntax: `more [options] file ...`
- `less`: Advanced pager for file viewing. Syntax: `less [options] file ...`
- `file`: Determine file type. Syntax: `file [options] file ...`
- `alias`: Create shorthand for commands. Syntax: `alias name='command [arguments]'`

The ellipsis (`...`) indicates that the command can take multiple files or directories as arguments, allowing for greater flexibility in its application.

### Special Characters

- `"` (Double Quote): Encloses a series of characters to form a single string. Particularly useful when dealing with filenames or arguments that include whitespace.
- 
Example without quotes:
  - `cat My Documents/file.txt`: This will fail because `My` and `Documents/file.txt` are treated as separate arguments. `cat` tries to open `My` as one first file and `Documents/file.txt` as the second.

Example with double quotes:
  - `cat "My Documents/file.txt"`: The double quotes preserve the whitespace, so the `cat` command treats `My Documents/file.txt` as a single argument.

Using quotes around filenames or arguments containing spaces ensures they are treated as single entities.
