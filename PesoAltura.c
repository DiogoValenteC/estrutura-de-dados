#include <stdio.h>

typedef struct {
    int peso;  // Peso em quilograma
    int altura;   // Altura em centimetros

} PesoAltura;
    
typedef int CHAVE;

int main() {
    PesoAltura pessoa;
    pessoa.peso = 95;
    pessoa.altura = 180;
    printf(" peso: %i\n altura: %i\n", pessoa.peso, pessoa.altura);

    if (pessoa.altura > 110) {
        printf("pode se divertir\n");
    } else {
        printf("desculpe, mas você não pode passar\n");
    }

    

    return 0;
}