#include <stdio.h>
#include <stdlib.h>

int main() {
    // Stack variable
    int stack_var = 42;

    // Heap variable
    int *heap_var = malloc(sizeof(int));
    *heap_var = 100;

    printf("Stack address: %p, value: %d\n", (void*)&stack_var, stack_var);
    printf("Heap  address: %p, value: %d\n", (void*)heap_var,   *heap_var);

    free(heap_var);
    return 0;
}
