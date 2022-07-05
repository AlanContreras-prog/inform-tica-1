#include<stdio.h>
#include<math.h>

int a, b;
main(){
	

printf("Ingresa el primer dato: ");
scanf("%d", &a);

printf("Ingresa el segundo dato: ");
scanf("%d", &b);

if(b == 0) return a;
    return mcd(b, a%b);


}




