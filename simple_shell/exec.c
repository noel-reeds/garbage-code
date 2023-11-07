#include "main.h"

/**
 * main - execute a program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", NULL};
	int ret;

	ret = execve(argv[0], argv, NULL);
	if (ret == -1)
		printf("Failed\n");
	printf("Done");
	return (0);
}
