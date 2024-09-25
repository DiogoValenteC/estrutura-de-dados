#include <stdio.h>
#include <stdlib.h>  // Para usar malloc

// Definição da estrutura do nó
typedef struct NO {
    int valor;           // Valor do nó
    struct NO* prox;     // Ponteiro para o próximo nó
} ELEMENTO;

// Estrutura da lista que aponta para o primeiro elemento
typedef struct {
    ELEMENTO* inicio;
} LISTA;

// Função para inicializar a lista
void inicializarLista(LISTA* l) {
    l->inicio = NULL;
}

// Função para inserir um elemento no início da lista
void inserirNoInicio(LISTA* l, int valor) {
    ELEMENTO* novo = (ELEMENTO*)malloc(sizeof(ELEMENTO)); // Aloca memória para o novo nó
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    novo->valor = valor;        // Atribui o valor ao nó
    novo->prox = l->inicio;     // Faz o próximo do novo nó apontar para o início
    l->inicio = novo;           // Atualiza o início da lista
}

// Função para inserir um elemento no final da lista
void inserirNoFinal(LISTA* l, int valor) {
    ELEMENTO* novo = (ELEMENTO*)malloc(sizeof(ELEMENTO)); // Aloca memória para o novo nó
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    novo->valor = valor;
    novo->prox = NULL;

    // Se a lista estiver vazia, insere no início
    if (l->inicio == NULL) {
        l->inicio = novo;
    } else {
        ELEMENTO* atual = l->inicio;

        // Percorre a lista até o último nó
        while (atual->prox != NULL) {
            atual = atual->prox;
        }

        // Insere o novo nó no final
        atual->prox = novo;
    }
}

// Função para exibir todos os elementos da lista
void exibirLista(LISTA* l) {
    ELEMENTO* atual = l->inicio;
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }
    printf("NULL\n");
}

// Função para liberar a memória da lista
void liberarLista(LISTA* l) {
    ELEMENTO* atual = l->inicio;
    while (atual != NULL) {
        ELEMENTO* temp = atual;
        atual = atual->prox;
        free(temp);  // Libera a memória do nó atual
    }
    l->inicio = NULL;  // Redefine o início da lista
}

int main() {
    LISTA minhaLista;
    
    inicializarLista(&minhaLista);   // Inicializa a lista
    
    // Inserindo alguns elementos no início
    inserirNoInicio(&minhaLista, 10);
    inserirNoInicio(&minhaLista, 20);
    inserirNoInicio(&minhaLista, 30);
    
    // Exibindo a lista
    printf("Lista após inserir no início: ");
    exibirLista(&minhaLista);
    
    // Inserindo elementos no final
    inserirNoFinal(&minhaLista, 40);
    inserirNoFinal(&minhaLista, 50);
    
    // Exibindo a lista
    printf("Lista após inserir no final: ");
    exibirLista(&minhaLista);
    
    // Liberando a memória
    liberarLista(&minhaLista);
    
    return 0;
}
