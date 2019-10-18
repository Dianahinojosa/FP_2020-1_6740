#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	double a, b, c, d;
	a = atof(argv[1]);
	b = atof(argv[2]);
	c = a + b;
	printf("%.2lf\n", c);
	c = a - b;
	printf("%.2lf\n", c);
	d = a * b;
	printf("%.2lf\n", d);
	d = a / b;
	printf("%.2lf\n", d);
	
	return 0;
}