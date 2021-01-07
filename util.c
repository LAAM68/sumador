/*
 * Programa para sumar 'n' numeros
 * 
*/

#include <stdio.h>

void leeArreglo(int n, int arreglo[])
{
	int indice;
	
	for(indice = 0; indice<n; indice++)
	{
		printf("numero %d: ", indice);
		scanf("%d",&(arreglo[indice]));
		//printf("%d\n",arreglo[indice]);
	}

}

