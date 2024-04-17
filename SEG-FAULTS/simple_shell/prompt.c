#include <stdio.h>

/**
 * main - prints a prompt.
 *
 * Return: Always 0.
 */
int main()
{
	size_t buff_size = 0;
	char *buff = NULL;

	printf("$ ");
	getline(&buff, &buff_size, stdin);
	free(buff);
	return (0);
}
