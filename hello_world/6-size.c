#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function the size of various types on the computer.
 *
 * Return: Always returns 0 (success)
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));

	return (0);
}
