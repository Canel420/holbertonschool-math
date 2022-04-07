#include "holberton.h"

/**
 * addition - function that performs the addition operation to complex numbers.
 *
 * @c1: First complex number to sum.
 * @c2: Second complex number to sum.
 * @c3: Third number - result
 *
 * Description: Sum two numbers
 */

void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c1.im;
}
