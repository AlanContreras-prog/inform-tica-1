#include<stdio.h>
main(){
	int Lista[] = {1, 3, 5, 7, 8};
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
