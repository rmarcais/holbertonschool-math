#include "holberton.h"
/**
 * argument - returns the argument of a given complex number.
 * @c: complex number of type struct complex.
 * Return: the argument of a given complex number.
 */
double argument(complex c)
{
	return (atan(c.im / c.re));
}
