#include "main.h"

/**
 * main - extract token from a string.
 *
 * Return: Always 0.
 */
int main()
{
	char str[] = "Let's breakdown this strings into tokens";
	char *delim = " ";
	char *token;

	token = strtok(str, delim);
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
