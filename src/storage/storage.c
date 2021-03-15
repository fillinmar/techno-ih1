//
// Created by fillinmar on 14.03.2021.
//
#include "storage.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

Record *create_records(size_t capacity) {
    Record *records = (Record *) calloc(sizeof(Record), capacity);
    if (!records) {
        return NULL;
    }

    for (size_t i = 0; i < capacity; ++i) {
        records[i].comments = NULL;
        records[i].marks = NULL;
    }

    return records;
};


Blog *create_blog(size_t capacity) {
    Record *records = create_records(capacity);
    if (records == NULL) {
        return NULL;
    }

    Blog *bl = (Blog *) malloc(sizeof(Blog));
    if (!bl) {
        return NULL;
    }

    bl->size = 0;
    bl->size_mult = 0;
    bl->capacity = capacity;
    bl->records = records;

    return bl;
};

size_t find_place(Blog *bl, Record *rec) {
    size_t place = bl->size;

    while (rec->first_month_statistic < bl[place].records->first_month_statistic) {
        place--;
    }
    // because we want to add element after less found
    return place + 1;
};

void shift_records(Blog *bl, size_t n) {
    for (size_t i = bl->size + 1; i > n; i--) {
        bl[i].records = bl[i - 1].records;
    }
};

bool resize_records(Blog *bl) {
    bl->capacity *= bl->size_mult;

    bl->records = (Record *) realloc(bl->records, bl->capacity * sizeof(Record));
    if (!bl->records)
        return false;

    return true;
};

bool insert_element(Blog *bl, Record *rec) {
    if (bl->size == 0) {
        bl->records[bl->size++] = *rec;
        return true;
    }

    if (bl->size + 1 > bl->capacity)
        if (!resize_records(bl))
            return false;

    size_t place = find_place(bl, rec);
    shift_records(bl, place);
    bl->records[place] = *rec;

    return true;
};

void print_records(Blog *bl, size_t n) {
    if (n > bl->size)
        printf("Sorry not enough records\n");

    printf("Popular records :\n");
    for (int i = 0; i < n && i < bl->size; i++) {
        printf("\tnumber - %d", i + 1);
        printf("\t\t Name - %s\n", bl->records[i].name);
        printf("\t\t Tags - %s\n", bl->records[i].tags);
        printf("\t\t Content - %s\n", bl->records[i].content);
    }
};

void free_blog(Blog **bl) {
    if (*bl == NULL) {
        return;
    }

    if ((*bl)->records == NULL) {
        free(*bl);
        (*bl) = NULL;
        return;
    }

    for (size_t i = 0; i < (*bl)->capacity; ++i) {
        if ((*bl)->records[i].name) {
            free((*bl)->records[i].name);
        }
        if ((*bl)->records[i].content) {
            free((*bl)->records[i].content);
        }
        if ((*bl)->records[i].tags) {
            free((*bl)->records[i].tags);
        }
        if ((*bl)->records[i].comments != NULL) {
            free((*bl)->records[i].comments);
        }
        if ((*bl)->records[i].marks != NULL) {
            free((*bl)->records[i].marks);
        }
    }

    free((*bl)->records);
    free(*bl);
    (*bl) = NULL;
}