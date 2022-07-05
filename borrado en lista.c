#include<stdio.h>
main(){
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
