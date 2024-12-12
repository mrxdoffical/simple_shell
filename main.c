#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <syscall.h>
#define BUFFER_SIZE 1024

/**
 * main- Simple shell program
 * Return: 0 on success
 */
int main(void)
{
	char *buffer = NULL;
	size_t buffer_size = 0;
	ssize_t characters;

	while (1)
	{
		printf("($) "); /* Display prompt */
		characters = getline(&buffer, &buffer_size, stdin);

		if (characters == -1) /* Handle EOF (Ctrl+D) */
		{
			printf("\n");
			free(buffer);
			exit(EXIT_SUCCESS);
		}

		/* Remove trailing newline */
		if (buffer[characters - 1] == '\n')
			buffer[characters - 1] = '\0';

		/* Exit command */
		if (strcmp(buffer, "exit") == 0)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}

			system(buffer);
			continue;

		/* TODO: Add command execution logic here */
		printf("You entered: %s\n", buffer);
	}

	free(buffer);
	return (0);
}
