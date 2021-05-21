#ifndef ITEM_H
#define ITEM_H

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int value;
    int *weights;
} item;

item item_create(int val, int num_of_weights);

void item_free(item *i);

#endif // ITEM_H