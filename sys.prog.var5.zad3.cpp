
#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	setlocale(0, "rus");
	const double pi = 3.14;
	double alfa = 1.5;
	double z = 2 * sqrt(2) * cos(alfa) * sin((pi / 4) + 2 * alfa);
	printf("z = %f\t\n", z);
}

