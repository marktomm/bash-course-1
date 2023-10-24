# Day 5: Branching, Loops, and Text Manipulation in Bash

---

## Section 1: Exhaustive Guide to Branching in Bash

### Objective
To gain a deep understanding of conditional branching mechanisms such as `if`, `else`, `elif`, `&&`, `||`, and `{}` for command grouping.

### Theory
- The `if`, `else`, and `elif` keywords are used to execute code conditionally.
- The `&&` (logical AND) and `||` (logical OR) operators facilitate compound condition handling.
- The `{}` brackets are used to group a block of commands to execute them in the current shell environment.

### Examples

1. **Simple if Statement**
    ```shell
    if [ "$VAR" -gt 10 ]; then
      echo "Greater than 10"
    fi
    ```
2. **if-else Statement**
    ```shell
    if [ "$VAR" -gt 10 ]; then
      echo "Greater than 10"
    else
      echo "Not greater than 10"
    fi
    ```
3. **if-elif-else Statement**
    ```shell
    if [ "$VAR" -gt 10 ]; then
      echo "Greater than 10"
    elif [ "$VAR" -eq 10 ]; then
      echo "Equal to 10"
    else
      echo "Less than 10"
    fi
    ```
4. **Using && for Logical AND**
    ```shell
    if [ "$VAR1" -gt 10 ] && [ "$VAR2" -lt 20 ]; then
      echo "Condition met"
    fi
    ```
5. **Using || for Logical OR**
    ```shell
    if [ "$VAR1" -gt 10 ] || [ "$VAR2" -lt 20 ]; then
      echo "Either condition met"
    fi
    ```
6. **Grouping Commands**
    ```shell
    { echo "Hello"; echo "World"; } > output.txt
    ```
7. **Nested if Statements**
    ```shell
    if [ "$VAR1" -gt 10 ]; then
      if [ "$VAR2" -lt 20 ]; then
        echo "Nested condition met"
      fi
    fi
    ```
8. **Multiple Commands in if and else**
    ```shell
    if [ "$VAR" -gt 10 ]; then echo "Greater"; else echo "Smaller"; fi
    ```
9. **Logical AND Short-circuit**
    ```shell
    [ "$VAR" -gt 10 ] && echo "Greater"
    ```
10. **Logical OR Short-circuit**
    ```shell
    [ "$VAR" -lt 10 ] || echo "Not Smaller"
    ```
11. **Complex Conditions using Parentheses**
    ```shell
    if [[ "$VAR1" -gt 10 && ( "$VAR2" -lt 20 || "$VAR3" -eq 30 ) ]]; then
      echo "Complex condition met"
    fi
    ```
12. **Exit Status Check**
    ```shell
    command1 && { command2; command3; }
    ```
13. **File Check and String Check**
    ```shell
    if [ -f "file.txt" ] && [ "$STRING" == "example" ]; then
      echo "File exists and string is example"
    fi
    ```
14. **Using else if Ladder**
    ```shell
    if [ "$VAR" -gt 10 ]; then
      echo "Greater than 10"
    elif [ "$VAR" -gt 5 ]; then
      echo "Greater than 5 but not greater than 10"
    else
      echo "Less than or equal to 5"
    fi
    ```
15. **Logical NOT**
    ```shell
    if ! [ "$VAR" -gt 10 ]; then
      echo "Not greater than 10"
    fi
    ```
16. **Using `test` command**
    ```shell
    if test "$VAR" -eq 10; then
      echo "Equal to 10"
    fi
    ```
17. **Arithmetic Evaluation**
    ```shell
    if (( VAR > 10 )); then
      echo "Greater than 10"
    fi
    ```
18. **String Comparison**
    ```shell
    if [ "$STRING1" == "$STRING2" ]; then
      echo "Strings are equal"
    fi
    ```
19. **Null String Check**
    ```shell
    if [ -z "$STRING" ]; then
      echo "String is null"
    fi
    ```
20. **Non-Null String Check**
    ```shell
    if [ -n "$STRING" ]; then
      echo "String is not null"
    fi
    ```

# Comprehensive Guide to Regular Expressions with `grep -E`

## Objectives
1. To learn the basic to advanced regular expression syntax supported by `grep` using the `-E` option.
2. To practice extracting or filtering data from log files or text streams.

---

## Introduction to `-E` Flag
The `-E` option in `grep` enables Extended Regular Expression (ERE) capabilities, providing a richer regex language.

---

## Regex Symbols and Usage in `grep -E`

### Anchors
1. **Start of line `^`**
    ```shell
    echo -e "apple\nbanana" | grep -E '^a'
    ``` 
    - Matches lines starting with "a".
  
2. **End of line `$`**
    ```shell
    echo -e "apple\nbanana" | grep -E 'a$'
    ``` 
    - Matches lines ending with "a".

### Character Sets
3. **Any single character `.`**
    ```shell
    echo "a.b" | grep -E 'a.b'
    ```  
    - Matches "a.b".

4. **Character classes `[...]`**
    ```shell
    echo "cat" | grep -E '[cb]at'
    ```
    - Matches "cat".

5. **Negate character class `[^...]`**
    ```shell
    echo "cat" | grep -E '[^d]at'
    ```
    - Matches "cat".

### Quantifiers
6. **Zero or more `*`**
    ```shell
    echo "caaaat" | grep -E 'ca*t'
    ```
    - Matches "caaaat".

7. **One or more `+`**
    ```shell
    echo "caat" | grep -E 'ca+t'
    ```
    - Matches "caat".

8. **Zero or one `?`**
    ```shell
    echo "cat" | grep -E 'ca?t'
    ```
    - Matches "cat".

9. **Exactly n `{n}`**
    ```shell
    echo "caaat" | grep -E 'ca{3}t'
    ```
    - Matches "caaat".

10. **n or more `{n,}`**
    ```shell
    echo "caaaat" | grep -E 'ca{2,}t'
    ```
    - Matches "caaaat".

11. **Between n and m `{n,m}`**
    ```shell
    echo "caaat" | grep -E 'ca{2,3}t'
    ```
    - Matches "caaat".

### Grouping and Alternation
12. **Grouping `( ... )`**
    ```shell
    echo "foobar" | grep -E '(foo|bar)'
    ```
    - Matches "foobar".

13. **Alternation `|`**
    ```shell
    echo "foo" | grep -E 'foo|bar'
    ```
    - Matches "foo".

### Escape Sequences
14. **Escape special characters `\`**
    ```shell
    echo '$' | grep -E '\$'
    ```
    - Matches "$".

### Word Boundaries
15. **Word boundary `\<` and `\>`**
    ```shell
    echo "foo bar" | grep -E '\<bar\>'
    ```
    - Matches "bar".

### Back-references
16. **Back-references `\1, \2, ...`**
    ```shell
    echo "aa bb aa" | grep -E '(aa) .+ \1'
    ```
    - Matches "aa bb aa".

# Practical Examples: Advanced Regular Expressions with `grep -E`

## Time Allocation
This section is designed for 2-3 hours of focused practice.

---

## Objective
To learn practical usage of `grep` with the `-E` option for extracting useful information such as IP addresses, email IDs, dates, and more from text files or logs.

---

## Practical Examples

### 1. Filtering IPv4 Addresses
```shell
echo -e "192.168.1.1\n172.31.0.0\n10.0.0.1" > ips.txt
grep -E '([0-9]{1,3}\.){3}[0-9]{1,3}' ips.txt
```
- Matches IPv4 addresses.

### 2. Extracting Email Addresses
```shell
echo -e "user@example.com\nuser.name@sub.example.com" > emails.txt
grep -E '[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}' emails.txt
```
- Matches email addresses.

### 3. Matching Dates (MM/DD/YYYY)
```shell
echo -e "01/20/2022\n12/31/1999" > dates.txt
grep -E '(0[1-9]|1[0-2])/(0[1-9]|[12][0-9]|3[01])/\\d{4}' dates.txt
```
- Matches dates in MM/DD/YYYY format.

### 4. Log Lines with Error Levels
```shell
echo -e "[INFO] Request successful\n[ERROR] Failed to connect" > logs.txt
grep -E '\[(INFO|ERROR|DEBUG)\]' logs.txt
```
- Matches lines with log levels like [INFO], [ERROR], [DEBUG].

### 5. URL Extraction
```shell
echo -e "http://example.com\nhttps://secure.example.com" > urls.txt
grep -E 'https?://[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}' urls.txt
```
- Matches HTTP and HTTPS URLs.

### 6. Extracting Hexadecimal Colors
```shell
echo -e "#FFFFFF\n#000000\n#4CAF50" > colors.txt
grep -E '#[a-fA-F0-9]{6}' colors.txt
```
- Matches hexadecimal color codes.

### 7. Filtering MAC Addresses
```shell
echo -e "00:1A:2B:3C:4D:5E\nFF:FF:FF:FF:FF:FF" > macs.txt
grep -E '([a-fA-F0-9]{2}:){5}[a-fA-F0-9]{2}' macs.txt
```
- Matches MAC addresses.

### 8. Finding TODO Comments
```shell
echo -e "// TODO: fix this\n# TODO: remove that" > todos.txt
grep -E 'TODO: .+' todos.txt
```
- Matches lines with "TODO" comments.

### 9. Matching File Extensions
```shell
echo -e "image.jpg\narchive.tar.gz" > files.txt
grep -E '\\.(jpg|png|tar\\.gz)$' files.txt
```
- Matches specific file extensions.

### 10. Extracting Domain Names
```shell
echo -e "www.example.com\nsub.example.co.uk" > domains.txt
grep -E '([a-zA-Z0-9.-]+)\\.([a-zA-Z]{2,})' domains.txt
```
- Matches domain names.

## Practice
1. Create a text file with complex lines mixing these patterns.
2. Use `grep -E` to extract each type of data.
