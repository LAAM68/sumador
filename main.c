/*
 * Programa para sumar 'n' numeros
 * 
*/

#include <stdio.h>
#include "util.h"

int main(int argc, char **argv)
{
	int n, arreglo[100], indice, suma = 0;
	
	printf("Hola Mundo\n");
	printf("Cantidad de numeros a sumar: ");
	scanf("%d",&n);
	
	leeArreglo(n,arreglo);
	
	for(indice = 0; indice < n; indice++) suma+=arreglo[indice];
	printf("La suma total es: %d\n", suma);
	
	return 0;
}

