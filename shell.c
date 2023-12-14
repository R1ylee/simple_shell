#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
/**
 * new_string - takes a string and adds the shell path
 * @c: argument
 * Return: the new string which is preceded by
 * shell path
 */
char *new_string(char *c)
{
	unsigned int i;
	char *n = (char *)malloc(1024 * sizeof(char));

	for (i = 0; i < 1024; i++)
	{
		n[i] = '\0';
	}
	n[0] = '/';
	n[1] = 'b';
	n[2] = 'i';
	n[3] = 'n';
	n[4] = '/';
	for (i = 0; c[i] != '\0'; i++)
	{
		n[i + 5] = c[i];
	}
	return (n);
}
/**
 * main - executes code
 * Return: 0 if successful
 */
int main(void)
{
	char *ch;
	char *buffer = (char *)malloc(1024 * sizeof(char));
	char *path;
	char *arg[] = {buffer, NULL};
	ssize_t size = 1024;

	while (strcmp("exit", buffer))
	{
		printf("($) ");
		getline(&buffer, &size, stdin);
		buffer[strcspn(buffer, "\n")] = '\0'

		arg[0] = new_st;
		execve(new_st, arg, NULL);
		free(buffer);
		free(new_st);
	}
	return (0);
}
