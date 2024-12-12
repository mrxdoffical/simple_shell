#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

/* Function prototypes */
char **split_line(char *line);
int execute_command(char **args);

#endif /* SHELL_H */
