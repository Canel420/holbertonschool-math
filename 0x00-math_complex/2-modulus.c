#include "holberton.h"
#include <math.h>
/**
 * modulus - Function that returns the modulus of a given complex
 * number.
 *
 * @c: Complex number to take the modulus from.
 *
 * Description: Takes the power of the real parts of the complex number
 * and square root their sum.
 *
 * Return: The modulus.
 */

double modulus(complex c)
{
	double root;

	root = sqrt(pow(c.re, 2) + pow(c.im, 2));

	return (root);
}
