#include <stdio.h>

void main()
{
	int resSoma, resMult, resDiv, n1, n2;
	
	printf("Informe N1: ");
	scanf("%d", &n1);
	printf("Informe N2: ");
	scanf("%d", &n2);
	resSoma = somarNumeros(n1, n2);
	resMult = multNumeros(n1, n2);
	resDiv = divNumeros(n1, n2);
	
	printf("A soma eh: %d\n", resSoma);
	printf("A mult eh: %d\n", resMult);
	printf("A div eh: %d\n", resDiv);
	
}

int somarNumeros(int x1, int x2)
{
	return x1 + x2;
}

int multNumeros(int x1, int x2)
{
	return x1 * x2;
}

int divNumeros(int x1, int x2)
{
	return x1 / x2;
}
