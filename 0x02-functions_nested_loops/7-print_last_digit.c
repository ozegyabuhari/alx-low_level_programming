#include "main.h"
/**
 * print_last_digit - Check Main
 * @n: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld * '0');

	return (0);
}
