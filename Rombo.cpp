#include <stdio.h>
#include <stdlib.h>
/*

3

*
**
***

4

*
**
***
****


4-(4-1)=1
4-(4-2)=2
4-(4-3)=3
4-(4-4)=4
*/

int main(){

int altura;

printf("Altura del triangulo?");
scanf("%d",&altura);
//printf("%d",altura);
altura++;
for(int i=1 ; i<altura ; i++){
  for (int j=i ; j>=1;j--){
    printf("*");
    }
  printf("\n");
  }
//Duplicamos pero ahora empezando con altura-1
for(int i=altura-2; i>=1; i--){
  for (int j=i ; j>=1;j--){
    printf("*");
    }
  printf("\n");
  }
}
