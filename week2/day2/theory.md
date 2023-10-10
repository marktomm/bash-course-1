# Shell File Name Expansion: Comprehensive Guide

## Scope
This document provides comprehensive information on shell file name expansion in Unix/Linux operating systems, focusing on special characters involved. The document is intended for software developers with experience in Linux/bash scripting.

## Quick read

In the context of this document, **expansion** refers to the process where special symbols or characters are replaced by a set of filenames or strings that they represent. It's like using shorthand to refer to multiple things at once. For example, using `*.txt` would "expand" to list all files that end in `.txt`. This makes it easier and quicker to perform tasks involving multiple files or commands.

## Normative References

1. IEEE Std 1003.1-2008 (POSIX.1)
2. Bash Reference Manual

## Definitions

- **Wildcard**: Special characters used for pattern matching.
- **Globbing**: The process of expanding wildcards.

## Special Characters

1. `*`: Matches any string, including null string.
2. `?`: Matches any single character.
3. `[...]`: Matches any character in the enclosed list. Ranges are acceptable (`a-z`).
4. `[!...]` or `[^...]`: Matches any character NOT in the list.
5. `{}`: Brace expansion, matches strings enclosed separated by commas.
6. `~`: Home directory shorthand. Expands to the home directory of the current user.
7. `~username`: Expands to the home directory of "username".
8. `\`: Escape character. Use before special character to consider it as a normal character.

### Example Codes

```shell
# Using * 
ls *.txt  # List all .txt files

# Using ?
ls ?.txt  # List all single-character .txt files

# Using []
ls [a-z].txt  # List all single-lowercase-letter .txt files

# Using [!...] or [^...]
ls [!a-m]*.txt  # List all .txt files not starting with letters between a and m

# Using {}
ls {file1,file2}.txt  # List file1.txt and file2.txt

# Using ~
cd ~  # Change to the home directory

# Using ~username
cd ~username  # Change to "username"'s home directory

# Using \
ls \*.txt  # Lists files with names "*.txt", without expanding '*'
```

## Sequence of Operations

1. Brace expansion
2. Tilde expansion
3. Parameter and variable expansion
4. Arithmetic expansion
5. Command substitution
6. Word splitting
7. Filename expansion (globbing)

## Special Notes

1. Quoted strings (`" "`, `' '`) will disable most special character interpretation.
2. Shell options (`nullglob`, `failglob`, `nocaseglob`, etc.) affect how globbing behaves.

