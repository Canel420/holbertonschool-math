#include "holberton.h"

/**
 * conjugate - function that returns the conjugate of a given complex number.
 *
 * @c: Complex number to conjugate.
 *
 * Description: Change the sign of the imaginary part to find c conjugate.
 *
 * Return: c conjugate.
 */

complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
