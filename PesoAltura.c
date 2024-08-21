#include <stdio.h>

typedef struct {
    int peso;  // Peso em quilograma
    int altura;   // Altura em centimetros

} PesoAltura;
    

int main() {
    PesoAltura pessoa;
    pessoa.peso = 95;
    pessoa.altura = 180;
    printf(" peso: %i\n altura: %i\n", pessoa.peso, pessoa.altura);
    return 0;
}