
#include <stdio.h>
#include <stdlib.h>



/*  fun��o que leia 10 n�meros inteiros e ap�s isso apresente o maior valor,
    o menor valor e a m�dia.
*/
void lerDezNumeros() {

    int maior = 0, menor = 0, media = 0, numeros;

    for(int i = 1; i < 10; i++) {
        scanf("%d ", numeros);

        if(numeros > maior) {
            maior = numeros;
        }
        else if(numeros < menor) {
            menor = numeros;
        }
         media += media + numeros;
    }

    media = (media / 10);


    printf("Maior eh %d", maior);
    printf("Menor eh %d", menor);
    printf("Media eh %d", media);
}


// Fun��o que recebe um inteiro e retorna os pares.
void parOuImpar(int n) {
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            printf("PARES: %d ", i);
        }
    }
}

// uma fun��o que escreva de 90 a 30, em ordem decrescente de 3 em 3.
void decrescente() {
    for(int i = 90; i >= 30; i--) {
        printf("%d \n", i);
    }
}


int main() {
    int opcao, number;

    do{
        printf(" 1 - Funcao de 10 numeros \n");
        printf(" 2 - Funcao que le um n�mero inteiro N e apresente todos os n�meros pares de 1 at� N. \n");
        printf(" 3 - Funcao que escreva de 90 a 30 \n");
        printf(" 4 Para sair do programa \n");
        scanf("%d ", &opcao);


        switch(opcao) {
            case 1:
                lerDezNumeros();
                break;
            case 2:
                printf("Digite um numero para achar os pares: ");
                scanf("%d", &number);
                parOuImpar(number);
                break;
            case 3:
                printf("Assecando o exercicio 03 \n");
                decrescente();
                break;
            default:
                printf("Saindo..");
        }


    } while (opcao != 4);


    return 0;
 }
