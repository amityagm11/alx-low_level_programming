#include <stdio.h>

/**
 * main - print every arguments
 * @argv - list
 * @argc - count
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i,j;
	(void)argv;

	j = argc - 1;

	for (i = 0; i <= j; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
}
	

