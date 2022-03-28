#include <stdio.h>
#include "holberton.h"

/**
 * display_complex_number - Function that displays complex numbers
 *
 * @c: name of complex number.
 *
 * Description: Display complex number according to complex sctructure
 * where c.re defines the real part number and c.im defines the imaginary
 * part.
 *
 */
void display_complex_number(complex c)
{
	int integerPart = (int)c.re;
	int integerParti = (int)c.im;

	if (c.im == 0)
		printf("%d\n", integerPart);
	if (c.im < 0)
		printf("%d - %di\n", integerPart, integerParti * -1);
	if (c.im == 1)
		printf("%d + i\n", integerPart);
	if (c.im == -1)
		printf("%d - i\n", integerPart);
	else
		printf("%d + %di\n", integerPart, integerParti);
}
