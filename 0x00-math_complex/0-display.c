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
		printf("%1.0f\n", c.re);
		return;
	}
	if (c.im == -1)
	{
		printf("%1.0f - i\n", c.re);
		return;
	}
	if (c.im < 0)
	{
		printf("%1.0f - %1.0fi\n", c.re, (c.im) * -1);
		return;
	}
	if (c.im == 1)
		printf("%1.0f + i\n", c.re);
	else
		printf("%1.0f + %1.0fi\n", c.re, c.im);
}
