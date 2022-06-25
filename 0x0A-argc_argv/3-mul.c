#include <stdio.h>
#include <stdlib.h>

/**
 * main -> this is a function to print to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error")
			return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;

print("%d\n", result);
return (0);
}
