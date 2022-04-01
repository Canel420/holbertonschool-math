#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/**
 * struct complex - Structure for complex numbers
 *
 * @re: defines a double type to the real part.
 * @im: defines a double type to the imaginary part
 *
 */

typedef struct complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);

#endif /* HOLBERTON_H */
