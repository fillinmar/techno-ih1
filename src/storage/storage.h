//
// Created by fillinmar on 14.03.2021.
//

#ifndef TECHNO_IZ1_STORAGE_H
#define TECHNO_IZ1_STORAGE_H

#include <stdbool.h>
#include <stdio.h>

typedef struct {
    char *name;
    char *content;
    char *tags;
    int comments; // numbers in the first month
    int marks; // the same
    char *date;
} Metadata;


typedef struct {
    size_t size;
    size_t capacity;

    Metadata *data;
} Element;

typedef struct {
    size_t size_multiplier;
    size_t size;
    size_t capacity;
    size_t load_maximum;

    size_t hash_base;
    size_t step;

    Element *map;
} Storage;
Element *create_map(size_t capacity);

size_t hash(const char *key, Storage *st);

bool resize(Storage *st);

bool add(Metadata *element, Storage *st);

void print_values(Storage *st);

Storage *create_storage(size_t size_multiplier, size_t size, size_t capacity, size_t load_maximum, size_t hash_base,
                        size_t step);

void free_storage(Storage **st);

#endif //TECHNO_IZ1_STORAGE_H
