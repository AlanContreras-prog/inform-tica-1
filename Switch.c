#include<stdio.h>
void main(){
    char letra;
    printf("Introduzca una letra: ");
    scanf("%c", &letra);
    switch(letra){
        case 'a':
        case 'A':
            printf("Vocal %c\n", letra);
            break;
        case 'e':
        case 'E':
            printf("Vocal %c\n", letra);
            break;
        case 'i':
        case 'I':
            printf("Vocal %c\n", letra);
            break;
        case 'o':
        case 'O':
            printf("Vocal %c\n", letra);
            break;
        case 'u':
        case 'U':
            printf("Vocal %c\n", letra);
            break;
        default:
            printf("Consonante %c\n", letra);
        
    }
}
