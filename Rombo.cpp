#include <stdio.h>
#include <stdlib.h>

int main(){

int altura,caracter;

printf("Por favor introduzca un lado para dibujar el rombo");
scanf("%d",&altura);
//DEBUG ALTURA
//printf("%d",altura);
caracter=0;
for(int fila=1 ; fila<=altura ; fila++){
    for (int espacios=altura-fila; espacios>=1;espacios--){
    printf(" ");
    }
  for (int caracterporfila=fila ; caracterporfila>=1;caracterporfila--){
    if(caracterporfila%4 == 2){printf("o");}
    else if(caracterporfila%4 == 1){printf(".");}
    else if(caracterporfila%4 == 0){printf("@");}
    else if(caracterporfila%4 == 3){printf(".");}
    }
    for (int caracterporfila=fila-1 ; caracterporfila>=1;caracterporfila--){
    if((fila-1-caracter)%4==0){printf("o");}
    else if((fila-1-caracter)%4 == 1){printf(".");}
    else if((fila-1-caracter)%4 == 0){printf("@");}
    else if((fila-1-caracter)%4 == 3){printf(".");}
    caracter++;
    }
  printf("\n");
  caracter=0;
  }
  for(int fila=altura-1; fila>=1; fila--){
    for (int espacios=altura-fila; espacios>=1;espacios--){
    printf(" ");
    }
  for (int caracterporfila=fila ; caracterporfila>=1;caracterporfila--){
    if(caracterporfila%4 == 2){printf("o");}
    else if(caracterporfila%4 == 1){printf(".");}
    else if(caracterporfila%4 == 0){printf("@");}
    else if(caracterporfila%4 == 3){printf(".");}
    }
  for (int caracterporfila=fila-1 ; caracterporfila>=1;caracterporfila--){
    if((fila-1-caracter)%4==0){printf("o");}
    else if((fila-1-caracter)%4 == 1){printf(".");}
    else if((fila-1-caracter)%4 == 0){printf("@");}
    else if((fila-1-caracter)%4 == 3){printf(".");}
    caracter++;
    }
    printf("\n");
    caracter=0;
  }
}
