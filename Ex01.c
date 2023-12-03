/* Desenvolva em C, um programa que leia 2 números e mostre qual é o maior
e qual é o menor. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroUm, numeroDois, menor = 0;

    printf("Digite um numero: ");
    scanf("%d", &numeroUm);

    printf("Digite o segundo numero: ");
    scanf("%d", &numeroDois);

    if(numeroDois < numeroUm) {
        menor = numeroDois; 
    }
   if (numeroUm < numeroDois){
        menor = numeroUm;
   }

   printf("Menor numero eh %d", menor);

   return 0;
   
}