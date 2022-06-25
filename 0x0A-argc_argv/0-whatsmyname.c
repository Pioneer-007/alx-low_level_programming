#include <stdio.h>

/**
 * main -> this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */ 
int main(int argc _attribute_((unused)), char *agrv[])
{
    printf("%s\n", *argv);
    return (0);
}
