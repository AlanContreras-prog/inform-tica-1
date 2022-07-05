#include<stdio.h>


int Lista[(t)];

main(){
	int i, o;
	
	
	printf("¿Cuantos elementos tendra el arreglo? :\n");
	scanf("%d", &t);
	int Lista[t];
	for(i=0; i<t; i++){
		printf("Ingresa el %d elemento: \n", i + 1);
		scanf("%d", &Lista[t]);
	}
		printf("Los elementos del arreglo original son :\n");
	for(i=0; i<t; i++){
		printf("Litas[%d] = %d \n", i, Lista[t]);
	}
	
	
/*
	n=n+1;
	while(j >= k){
		Lista[j+1] = Lista[j];
		j = j-1;
	}
		Lista[k] = item;
		printf("Los elementos del arreglo despues de la inserccion son :\n");
	for(i = 0; i<n; i++){
		printf("Listas[%d] = %d \n", i, Lista[i]);
	}*/
	
}
