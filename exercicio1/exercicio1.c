// Exercício 1: Vetor de Números Pares
#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade;
    int *vetor;
    printf("Digite a quantidade de numeros que deseja armazenar: ");
    scanf("%d", &quantidade);

    vetor = (int *)malloc(quantidade * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for(int i = 0; i < quantidade; i++) {
        printf("Digite o %d numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Os numeros inteiros pares digitados foram:\n");
    for(int i = 0; i < quantidade; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    free(vetor);
    return 0;
}
