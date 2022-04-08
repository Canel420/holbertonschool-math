#include "holberton.h"

/**
 * multiplication - Function that performs the multiplication operation
 * to complex numbers.
 *
 * @c1: First number to multiply.
 * @c2: Second number to multiply.
 * @c3: Result number.
 *
 * Description: Multiply two complex numbers.
 *
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
