#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * infinite_while - prevents process from ending to make it a zombie
 *
 * Return: Always 0
 */
int infinite_while(void)
{
	while (1)
		sleep(1);
	return (0);
}

/**
 * main - creates 5 zombie process
 *
 * Return: 0
 */
int main(void)
{
	pid_t child;
	char i;

	for (i = 0; i < 5; i++)
	{
		child = fork();
		if (child <= 0)
			exit(0);
		else
			printf("Zombie process created, PID: %d\n", child);
	}
	infinite_while();
	return (0);
}
