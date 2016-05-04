#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct dado_s {
	double real;
	double imag;
};

typedef struct dado_s complex_r;

complex_r complex_s(complex_r v1, complex_r v2) {

	complex_r r;

	r.real = v1.real + v2.real;
	r.imag = v1.imag + v2.imag;

	return r;
}

complex_r complex_st(complex_r v1, complex_r v2) {

	complex_r r;

	r.real = v1.real - v2.real;
	r.imag = v1.imag - v2.imag;

	return r;
}


complex_r complex_m(complex_r v1, complex_r v2) {

	complex_r r;

	r.real = v1.real * v2.real;
	r.imag = v1.imag * v2.imag;

	return r;
}


int main(int argc, char **argv) {
	int dummy = 0;

	complex_r cp, a, b;

	a.real = atof(argv[1]);
	a.imag = atof(argv[2]);
	b.real = atof(argv[3]);
	b.imag = atof(argv[4]);

	
	printf("Menu: \n1 - Soma de complexos\n2 - Subtração de complexos\n3 - Multiplicação de complexos\n\n");
	scanf_s("%i", &dummy);
	
	if (dummy == 1) {
		cp = complex_s(a, b);

		printf("Numero complexo: \n%.3lfi + (%.3lf)\n\n", cp.imag, cp.real);

		system("pause");
	
	}

	if (dummy == 2) {
		cp = complex_st(a, b);

		printf("Resultado: \n%.3lfi + (%.3lf)\n\n", cp.real, cp.imag);

		system("pause");

	}

	if (dummy == 3) {
		cp = complex_m(a, b);

		printf("Resultado: \n%.3lfi + (%.3lf)\n\n", cp.real, cp.imag);

		system("pause");

	}

}