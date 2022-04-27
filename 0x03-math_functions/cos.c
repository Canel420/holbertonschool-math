#include <stdio.h>
#include <math.h>

double cos_derivative(double x)
{
	return (sin(x) * -1);
}

int main()
{
	FILE *fp = NULL;
	double x, y;

	fp = fopen("cos.txt", "w+");

	for (x = 0; x <= (6 * M_PI) ; x = x + 0.01)
	{
		y = cos_derivative(x);
		fprintf(fp, "%lf\t %lf\n", x, y);
	}
	fclose(fp);

	return (0);
}
