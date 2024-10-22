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
printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
printf("Size of a long int: %d byte(s)\n", (int) sizeof(long));
printf("Size of a float: %d byte(s)\n", (int) sizeof(float));

    return 0;
}