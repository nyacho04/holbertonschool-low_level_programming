#include "main.h"
/**
 * print_last_digit - ueueueue mala noticia mi gente
 * @nya: An integer input
 * Description: esta es la mala noticia
 * Return: last digit of number nya
 */
int print_last_digit(int nya)
{
	int n;

	if (nya < 0)
		n = -1 * (nya % 10);
	else
		n = nya % 10;

	_putchar((n % 10) + '0');
		return (n % 10);

}
