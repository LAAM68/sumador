/*
 * Programa para sumar 'n' numeros
 * 
*/

#include <stdio.h>
#include "util.h"

int main(int argc, char **argv)
{
	int n, arreglo[100], indice;
	
	printf("Hola Mundo\n");
	printf("Cantidad de numeros a sumar: ");
	scanf("%d",&n);
	
	leeArreglo(n,arreglo);
	
	
	
	return 0;
}

