/*
 * Programa para sumar 'n' numeros
 * 
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	int n, arreglo[100], indice;
	
	printf("Hola Mundo\n");
	printf("Cantidad de numeros a sumar: ");
	scanf("%d",&n);
	
	for(indice = 0; indice<n; indice++)
	{
		printf("numero %d: ", indice);
		scanf("%d",&(arreglo[indice]));
		//printf("%d\n",arreglo[indice]);
	}
	
	return 0;
}

