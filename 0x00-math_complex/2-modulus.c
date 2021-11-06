#include "holberton.h"
#include <math.h>
/**
 * modulus - returns the modulus of a given complex number.
 * @c: complex number of type struct complex.
 * Return: the modulus of a given complex number.
 */
double modulus(complex c)
{
	double nb = c.re * c.re + c.im * c.im;

	return (sqrt(nb));
}
