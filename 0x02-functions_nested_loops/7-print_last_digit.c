#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int pld;

	 n = (n % 10);

	if (n < 0)
	{
		n = -n;
	_putchar(n + '0');
	return (n);
}
