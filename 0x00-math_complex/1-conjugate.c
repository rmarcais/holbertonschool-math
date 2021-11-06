#include "holberton.h"
/**
 * conjugate - returns the conjugate of a given complex number.
 * @c: complex number of type struct complex.
 * Return: the conjugate of a given complex number.
 */
complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
