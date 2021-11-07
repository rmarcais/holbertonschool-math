#include "holberton.h"
/**
 *complex_from_mod_arg - updates the re/im parts of a complex given its mod/arg
 * @m: modulus of a complex number.
 * @arg: argument of a complex number.
 * @c3: points to a struct complex.
 * Return: Nothing.
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
