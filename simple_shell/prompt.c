#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a prompt.
 *
 * Return: Always 0.
 */
int main()
{
	size_t n = 10;
	char *buff = NULL;

	printf("$ ");
	getline(&buff, &n, stdin);
	return (0);
}
