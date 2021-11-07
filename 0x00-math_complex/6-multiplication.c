#include "holberton.h"
/**
 * multiplication - performs the multiplication operation to complex numbers.
 * @c1: complex number of type struct complex.
 * @c2: complex number of type struct complex.
 * @c3: points to a struct complex.
 * Return: Nothing.
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re * c2.re - (c1.im * c2.im);
	c3->im = c1.re * c2.im + c1.im * c2.re;
}
