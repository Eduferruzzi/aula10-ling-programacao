// Exercício 2: Concatenação de Vetores
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &n1);
    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &n2);

    int *vetor1 = (int *)malloc(n1 * sizeof(int));
    int *vetor2 = (int *)malloc(n2 * sizeof(int));
    int *vetorConcatenado = (int *)malloc((n1 + n2) * sizeof(int));

    if(vetor1 == NULL || vetor2 == NULL || vetorConcatenado == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os elementos do primeiro vetor:\n");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for(int i = 0; i < n2; i++) {
        scanf("%d", &vetor2[i]);
    }

    for(int i = 0; i < n1; i++) {
        vetorConcatenado[i] = vetor1[i];
    }

    for(int i = 0; i < n2; i++) {
        vetorConcatenado[n1 + i] = vetor2[i];
    }

    printf("Vetor concatenado:\n");
    for(int i = 0; i < n1 + n2; i++) {
        printf("%d ", vetorConcatenado[i]);
    }

    free(vetor1);
    free(vetor2);
    free(vetorConcatenado);

    return 0;
}