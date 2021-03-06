#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <math.h>

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
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);

#endif /* HOLBERTON_H */
