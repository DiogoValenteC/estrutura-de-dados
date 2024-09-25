#include <stdio.h>
#include <stdlib.h>  // Para usar malloc

typedef int TIPOCHAVE;

typedef struct NO {
    int valor;
    struct NO *prox;
} ELEMENTO;

typedef struct REGISTRO {
    TIPOCHAVE chave;
    struct REGISTRO *proxReg;
} REGISTRO;

typedef struct aux {
    REGISTRO reg;
    struct aux* prox;
} AUX;

typedef struct {
    ELEMENTO *inicio;
} LISTA;

int main() {
    ELEMENTO e;
    e.valor = 10;
    e.prox = NULL;  // Inicializa o ponteiro com NULL
    
    printf("Valor do elemento: %d\n", e.valor);
    
    return 0;
}
