#include "main.h"
int actual_sqrt_recursion(int nya, int nya2);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @nya: number to calculate the square root
 * Return: the resulting square root
 */
int _sqrt_recursion(int nya)
{
	if (nya < 0)
	return (-1);
	return (actual_sqrt_recursion(nya, 0));
}
/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @nya: number to calculate the square root of
 * @nya2: iterator
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int nya, int nya2)
{
	if (nya2 * nya2 > nya)
	return (-1);
	if (nya2 * nya2 == nya)
	return (nya2);
	return (actual_sqrt_recursion(nya, nya2 + 1));
}
