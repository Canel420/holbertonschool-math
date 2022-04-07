#include "holberton.h"

/**
 * substraction - function that performs the substraction operation to
 * complex numbers.
 *
 * @c1: First complex number to substract.
 * @c2: Second complex number to substract.
 * @c3: Third number - result
 *
 * Description: Substract two numbers
 */

void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c1.im;
}
