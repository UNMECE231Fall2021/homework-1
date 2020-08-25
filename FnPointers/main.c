#include <stdio.h>

double square(double x) {
	return x * x;
}

double cube(double x) {
	return square(x) * x;
}

double custom_abs(double a) {
	return (a<0) ? -a : a;
}

// A function that takes another function and a double as an input. (*hldr)
//	is a pointer to a function that returns a double, and has a double as
//	an input.
double handler(double(*hldr)(double), double x) {
	return hldr(x);
}

int main() {
	int i;
	double k = -6.1;
	// fns is an array of function pointers. The functions that fns can
	//	point to are functions that return a double and take a double as an
	//	input.
	double (*fns[3])(double) = {square, cube, custom_abs};

	for(i = 0; i < 3; i++) {
		printf("%.3lf\n", handler(fns[i], k));
	}

	return 0;
}
