#include <stdio.h>

/**
 * main - prints all argv except ac.
 *
 *@ac: number of args passed.
 *
 *@av: arguments passed
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int count;

	if (count > 1)
	{
		for (count = 1; count < ac; count++)
			printf("%d", av[count]);
	}
	return (0);
}

