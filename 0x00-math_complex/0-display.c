#include <stdio.h>
#include "holberton.h"

void display_complex_number(complex c)
{
	int integerPart = (int)c.re;
	int integerParti = (int)c.im;

	if (c.im == 0)
		printf("%d\n", integerPart);
	else
		printf("%d + %di\n", integerPart, integerParti);
}
