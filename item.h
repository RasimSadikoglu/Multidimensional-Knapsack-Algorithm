#ifndef ITEM_H
#define ITEM_H

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    size_t value;
    size_t *weights;
} item;

item item_create(size_t val, size_t num_of_weights);

void item_free(item *i);

#endif // ITEM_H