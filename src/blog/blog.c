//
// Created by fillinmar on 14.03.2021.
//
#include "blog.h"
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
        records[i].date = 0 ;
        records[i].first_month_statistic = 0;
        records[i].name = NULL;
        records[i].content =NULL;
        records[i].tags = NULL;
    }

    return records;
};


Blog *create_blog(size_t capacity, size_t size_mult) {
    Record *records = create_records(capacity);
    if (records == NULL) {
        return NULL;
    }

    Blog *bl = (Blog *) malloc(sizeof(Blog));
    if (!bl) {
        return NULL;
    }

    bl->size = 0;
    bl->size_mult = size_mult;
    bl->capacity = capacity;
    bl->records = records;

    return bl;
};

size_t find_place(Blog *bl, Record *rec) {
    size_t place = bl->size - 1;

    while (rec->first_month_statistic < bl->records[place].first_month_statistic) {
        place--;
    }
    // because we want to add element after less found
    return place + 1;
};

void shift_records(Blog *bl, size_t n) {
    for (size_t i = bl->size; i > n; i--) {
        bl->records[i] = bl->records[i-1];
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
    bl->size++;

    return true;
};

void print_records(Blog *bl, size_t n) {
    if (n > bl->size)
        printf("Sorry not enough records\n");
    printf("%lu", bl->size-1);

    printf("Popular records :\n");
    for (size_t i = bl->size-1, j = 1; i >= 0 && j <= n; i--, j++) {
        printf("\tnumber - %lu ", j);
        printf("\t\t Name - %s\n", bl->records[i].name);
        printf("\t\t Tags - %s\n", bl->records[i].tags);
        printf("\t\t Content - %s\n", bl->records[i].content);
        printf("\t\t Count of actions during first month - %d\n", bl->records[i].first_month_statistic);

        if (i==0)
            break;
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

    free((*bl)->records);
    free(*bl);
    (*bl) = NULL;
}