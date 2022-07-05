// programa que colecta y presenta una serie de montos relacionados en transacciones bancarias
#include<stdio.h>
int main (void){
	printf("\n\t\tEstructura de Datos\n");
	printf("\n\n\tSe analisan las transacciones bancarias realizadas a una cuenta\n\n\n");
	printf("\tEl alamcenamiento de las operaciones se realiza en un arreglo\n\n");
	int i;
	float total;
	float movimientos[12];
for (i=0; i<12; ++i){
	printf("\n Capture el monto de la transaccion %i : $ ", i+1);
	fflush(stdin);
	scanf("%f", &movimientos[i]);
	}
	total = 0;
	printf("\nLos movimientos realizados son: \n");
for (i=0; i<12; ++i)
	printf("-->$%.4f\n", movimientos[i], total+=movimientos[i]);
	printf("\n\n\t\t\t El monto total de los %i movimientos es de $ %.4f\n",i , total);
	printf("\t\t\t\t\t\t\t\t    ------------");
}
