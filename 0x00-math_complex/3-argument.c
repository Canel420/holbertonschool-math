#include "holberton.h"

/**
 * argument - Function that returns the argument of a given complex number.
 *
 * @c: Complex number
 *
 * Description: Finds the angle on the complex plane of a given complex number
 *
 * Return: The argument or angle.
 */

double argument(complex c)
{
	double a;

	a = atan(c.im / c.re);
	return (a);
}
