#include <stdio.h>
#include <malloc.h>

int main() {

    int *j;
    j = (int *) malloc(sizeof(int)); // void * -> int *

    printf("j: %i\n", (int) sizeof(j));
    printf("j: %p\n", j);
    

    return 0;
}