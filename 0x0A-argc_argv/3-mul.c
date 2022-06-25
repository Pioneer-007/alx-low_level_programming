#include <stdio.h>
#include <stdlib.h>

/**
 * main -> this is a function to print its name
 * @argc: argc paramter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	print f("%d\n", prod);
	return (0);
}
