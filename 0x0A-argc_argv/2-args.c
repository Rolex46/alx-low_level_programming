#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: counts arguments
 * @argv: arguments
 *
 * Return: always 0 on success
 */

int main(int argc, char *argv[])
{
	/*declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - prints each arguments*/
		while (count < argc)
		{
			printf("%s\n", argv[0]);
			count++;
		}
	}
	return (0);
}
