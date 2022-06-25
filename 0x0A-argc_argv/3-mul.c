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
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "error");
		return (1);
	}
	num1 = atoi(argv[]);
	num2 = atoi(argv[]);
	result = num1 * num2;

	print f("%d\n", result);
	return (0);
}
