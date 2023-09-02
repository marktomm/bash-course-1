## Week 1, Day 1: Practice with Tutor

### Objective
The objective of the practical session is to help students navigate and 
manipulate the Linux file system using the shell. This includes basic commands 
for file and directory operations, and an introduction to quoting and aliasing 
for more advanced tasks.

### Prerequisite
- Terminal access
- Basic understanding of terminal and shell as provided in the theory session

### Task 1: Navigating the Filesystem
#### Description:
Begin by teaching the `cd` and `pwd` commands. Have the student navigate to 
different directories and check their current directory.

#### Commands:
- `cd /`
- `cd ~/Desktop`
- `cd ..`
- `pwd`
- `mkdir "Directory With Space"`
- `cd "Directory With Space"` (using quotes)
- `cd Directory\ With\ Space` (using backslashes to **escape** spaces)
- `mkdir "Directory With Space"`

#### Objective: 
Understand the basics of directory navigation and confirming your location in 
the filesystem.

---

### Task 2: Listing Directory Contents
#### Description:
Teach the `ls` command to list files and directories. Cover basic options like 
`-l` for long listing and `-a` for showing hidden files.

#### Commands:
- `ls`
- `ls -l`
- `ls -a`

#### Objective:
Understand how to view directory contents and utilize options for more detailed 
views.

---

### Task 3: File Operations
#### Description:
Cover basic file operations, including creating, viewing, and deleting files.

#### Commands:
- `touch file.txt`
- `cat file.txt`
- `rm file.txt`
- `touch file with space.txt`
- `touch "file with space.txt"`

#### Objective:
Learn basic file operations including creation, viewing, and deletion.

---

### Task 4: Directory Operations
#### Description:
Demonstrate the creation and deletion of directories using `mkdir` and `rmdir`.

#### Commands:
- `mkdir NewDirectory`
- `rmdir NewDirectory`
- `mkdir New Directory`
- `mkdir "New Directory"`

#### Objective:
Understand how to create and delete directories.

---

### Task 5: Quoting and Filename Issues
#### Description:
Explain why quotes are necessary for files and directories with spaces. Use the 
`cat` command for this demonstration.

#### Commands:
- `touch "File With Space.txt"`
- `cat File With Space.txt` (should fail)
- `cat "File With Space.txt"` (should work)

#### Objective:
Understand the necessity of quotes in commands dealing with filenames that 
include spaces.

---

### Task 6: Alias Creation
#### Description:
Show how to create a simple alias, and explain its usage.

#### Commands:
- `alias ll='ls -l'`
- `ll`

#### Objective:
Learn the concept of aliasing for creating shorthand commands.
