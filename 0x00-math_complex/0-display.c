#include "holberton.h"
/**
 * display_complex_number - displays the complex numbers.
 * @c: complex number of type struct complex.
 * Return: Nothing.
 */
void display_complex_number(complex c)
{
	if (c.im == 0)
	{
		printf("%g\n", c.re);
		return;
	}
	if (c.im == -1)
	{
		printf("%g - i\n", c.re);
		return;
	}
	if (c.im < 0)
	{
		printf("%g - %gi\n", c.re, (c.im) * -1);
		return;
	}
	if (c.im == 1)
		printf("%g + i\n", c.re);
	else
		printf("%g + %gi\n", c.re, c.im);
}
