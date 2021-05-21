#include "item.h"

item item_create(int val, int num_of_weights) {
    item i;
    i.value = val;

    i.weights = malloc(sizeof(int) * num_of_weights);

    if (i.weights == NULL) {
        fprintf(stderr, "Memory allocation error!\n");
        exit(EXIT_FAILURE);
    }

    return i;
}

void item_free(item *i) {
    free(i->weights);
    return;
}