#include "holberton.h"
/**
 * substraction - performs the substraction operation to complex numbers.
 * @c1: complex number of type struct complex.
 * @c2: complex number of type struct complex.
 * @c3: points to a struct complex.
 * Return: c3.
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
