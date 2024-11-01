#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	float d, e, f;
	printf("Introduce 3 numere intregi: \n");
	scanf("%d %d %d", &a, &b, &c);
	printf("Introduce 3 numere reale. Suma lor trebuie sa fie 1! \n");
	scanf("%f %f %f", &d, &e, &f);
	if (d + e + f != 1) {
		printf("Suma lor nu este egala cu 1");
		
	}
	float suma_ponderata = a * d + b * e + c * f;
	printf("Suma ponderata este: \n %f", suma_ponderata);
}
