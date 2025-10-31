// Exercício 3: Lista de Compras Dinâmica
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numero_de_itens = 2;
    char buffer[50];
    char (*lista_de_compras)[50] = malloc(numero_de_itens * sizeof(*lista_de_compras));
    if (lista_de_compras == NULL) {
        printf("Erro de alocação de memória\n");
        return 1;
    }

    printf("Digite os 2 itens iniciais para a lista de compras:\n");
    for (int i = 0; i < numero_de_itens; i++) {
        printf("Digite o item %d: ", i + 1);
        scanf("%s", lista_de_compras[i]);
    }
    
    while(1) {
        printf("Digite um novo item para a lista de compras (ou 'sair' para finalizar): ");
        scanf("%s", buffer);
        if (strcmp(buffer, "sair") == 0) {
            break;
        }

        numero_de_itens++;

        lista_de_compras = realloc(lista_de_compras, numero_de_itens * sizeof(*lista_de_compras));
        if (lista_de_compras == NULL) {
            printf("Erro de realocação de memória\n");
            return 1;
        }

        strcpy(lista_de_compras[numero_de_itens - 1], buffer);
    }

    printf("Lista de compras:\n");
    for (int i = 0; i < numero_de_itens; i++) {
        printf("%s\n", lista_de_compras[i]);
    }

    free(lista_de_compras);
    return 0;
}