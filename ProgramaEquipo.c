#include<stdio.h>
int Lista[t];

main(){
	int i, o;
	
	
	printf("¿Cuantos elementos tendra el arreglo? :\n");
	scanf("%d", &t);
	
	for(i=0; i<t; i++){
		printf("Ingresa el %d elemento: \n", i + 1);
		scanf("%d", &Lista[t])
	}
	
	printf("Que deseas hacer: \n\n Opcion 1. Agregar Elemento al arreglo. \n 2.Borrar elemento del arreglo\n: ");
	scanf("%d", &o);
	if(o==1){
		
		AgregarElemento();
		
	} if
	
	
	
	//funciones
int AgregarElemento(){
	
	int item = 10, k = 3, n = 5;
	int i = 0, j = n;
	printf("Los elementos del arreglo original son :\n");
	for(i=0; i<n; i++){
		printf("Litas[%d] = %d \n", i, Lista[i]);
	}
	n=n+1;
	while(j >= k){
		Lista[j+1] = Lista[j];
		j = j-1;
	}
		Lista[k] = item;
		printf("Los elementos del arreglo despues de la inserccion son :\n");
	for(i = 0; i<n; i++){
		printf("Listas[%d] = %d \n", i, Lista[i]);
	}
	
}

int BorrarElemento(){
	int Lista[] = {1, 3, 5, 7, 8};
	int k = 3, n = 5;
	int i, j;
	printf("Los elementos del arreglo original son :\n");
	for(i=0; i<n; i++){
		printf("Litas[%d] = %d \n", i, Lista[i]);
	}
	
	j = k;
	while(j < n){
		Lista[j - 1] = Lista[j];
		j = j + 1;
	}
		n = n - 1;
		printf("Los elementos del arreglo despues del borrado son :\n");
	for(i = 0; i<n; i++){
		printf("Listas[%d] = %d \n", i, Lista[i]);
	}
	
}
