# Simple Shell Project

A simple UNIX command line interpreter implemented in C.

## Description

This Simple Shell project is a command-line interpreter that provides a user interface to access operating system services. It's written in C and mimics basic functionalities of the standard shell (sh).

## Features

- Displays a prompt and waits for user input
- Executes simple commands (ls, pwd, etc.)
- Handles command lines with arguments
- Handles the PATH environment variable
- Implements built-in commands:
  - `exit`: exits the shell
  - `env`: prints the current environment
  - `cd`: changes directory
- Handles command separators (;)
- Handles basic error management
- Handles "end of file" condition (Ctrl+D)

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc
- Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- Code should follow the Betty style

## Installation

```bash
git clone https://github.com/mrxdoffical/simple_shell.git
cd simple_shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Usage

### Interactive Mode

```bash
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($) exit
$
```

### Non-Interactive Mode

```bash
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c
$
```

## Files Description

- `main.c`: Entry point of the program
- `shell.h`: Header file containing all function prototypes
- `string.c`: String manipulation functions
- `execute.c`: Command execution functions
- `builtin.c`: Built-in command implementations
- `path.c`: PATH handling functions
- `memory.c`: Memory management functions

## Built-in Commands

- `exit [status]`: Exits the shell with a given status
- `env`: Prints the current environment variables
- `cd [directory]`: Changes the current directory

## Authors

- [ebram gerges]

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments

- ALX SE Program
- Holberton School
- All the peers who helped during the development