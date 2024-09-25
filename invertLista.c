#include <stdio.h>
#include <stdlib.h>

// Definindo o nó da lista ligada
struct Node {
    int data;
    struct Node* next;
};

// Função para inverter a lista ligada
void inverterLista(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;   
        current->next = prev;   
        prev = current;         
        current = next;         
    }
    *head = prev;             
}

// Função para adicionar um nó no início da lista ligada
void inserirInicio(struct Node** head, int novoDado) {
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));
    novoNo->data = novoDado;
    novoNo->next = *head;
    *head = novoNo;
}

// Função para imprimir a lista ligada
void imprimirLista(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Função principal
int main() {
    struct Node* head = NULL;

    // Criando a lista: 10 -> 40 -> 20
    inserirInicio(&head, 20);
    inserirInicio(&head, 40);
    inserirInicio(&head, 10);

    printf("Lista original:\n");
    imprimirLista(head);

    // Inverter a lista
    inverterLista(&head);

    printf("Lista invertida:\n");
    imprimirLista(head);

    return 0;
}
