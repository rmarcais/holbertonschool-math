#include "holberton.h"
/**
 * division - performs the division operation to complex numbers.
 * @c1: complex number of type struct complex.
 * @c2: complex number of type struct complex.
 * @c3: points to a struct complex.
 * Return: Nothing.
 */
void division(complex c1, complex c2, complex *c3)
{
	complex c4, c5;

	c4.re = c1.re * c2.re - (c1.im * (-c2.im));
	c4.im = c1.re * (-c2.im) + c1.im * c2.re;
	c5.re = c2.re * c2.re + c2.im * c2.im;
	c5.im = 0;
	c3->re = c4.re / c5.re;
	c3->im = c4.im / c5.re;
}
