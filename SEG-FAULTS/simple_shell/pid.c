#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * main - retrieves the pid.
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	pid_t my_ppid;

	my_ppid = getppid();
	my_pid = getpid();
	printf("%u\n", my_ppid);
	printf("%u\n", my_pid);
	return (0);
}
