#include "main.h"

/**
 * custom_getline - read from standard input.
 *
 *@lineptr: pointer to the buffer storing data from stdin.
 *
 *@n: size of buffer.
 *
 * Return: Number of characters read.
 */
size_t get_line(**lineptr, *n, FILE *stream)
{
	size_t str;

	str = malloc(sizeof(size_t) * n);
	if (str == NULL)
		free(str);
		return (-1);
	fd = read(STDIN_FILENO, &n, nbyte);
}
