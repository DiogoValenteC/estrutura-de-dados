#include <stdio.h>
#include <stdlib.h> // Inclui stdlib.h para usar malloc

typedef struct {
    int peso;   // peso em quilogramas
    int altura; // altura em centimetros
} PesoAltura;

int main() {
    
    // Alocando memória para pessoa1
    PesoAltura *pessoa1;
    pessoa1 = (PesoAltura *) malloc(sizeof(PesoAltura));
    
    // Atribuindo valores para pessoa1
    pessoa1->peso = 80;
    pessoa1->altura = 185; 

    // Imprimindo valores de pessoa1
    printf("Peso de pessoa1: %i\n", pessoa1->peso);
    printf("Altura de pessoa1: %i\n", pessoa1->altura);

    // Alocando memória corretamente para p
    PesoAltura *p;
    p = (PesoAltura *) malloc(sizeof(PesoAltura));

    // Atribuindo valores para p
    p->peso = 120;
    p->altura = 180;

    // Imprimindo valores de p
    printf("Altura de p: %i\n", p->altura);
    printf("Peso de p: %i\n", p->peso);

    // Liberando a memória alocada
    free(pessoa1);
    free(p);

    return 0;
}
