/* Este programa captura un dato que sera multiplicado en la sucesiom, 4 de julio 2022*/

#include<stdio.h>
int i, N;

main(){
	
	
	printf("Este programa realiza sucesiones, deberas ingresar el limite de la suesioón. \n\n Introduzca el valor limite de la sucesion\n ");
	scanf("%d", &N);
	
	int sucesion[N];
	printf("\n\n\n");
	for(i=1; i<=N; i++){
		sucesion[i]= (2*i)+5;
		printf(" La operacion 2(%d)+ 5 = %d\n", i, 	sucesion[i]);
		}
		
		
}



