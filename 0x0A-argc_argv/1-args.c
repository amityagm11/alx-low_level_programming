#include <stdio.h>

/**
 * main - print the number of argu
 * @argv: list
 * @argc: count
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
