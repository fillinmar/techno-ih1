//
// Created by fillinmar on 14.03.2021.
//

#ifndef TECHNO_IZ1_STORAGE_H
#define TECHNO_IZ1_STORAGE_H

#include <stdbool.h>
#include <stdio.h>

typedef struct {
    char *content;
    int date; // format YYYY:MM:DD
} Comments;

typedef struct {
    int marks;
    int date; // format YYYY:MM:DD
} Marks;

typedef struct {
    char *name;
    char *content;
    char *tags;
    Comments *comments;
    Marks *marks;
    int date; // format YYYY:MM:DD
    int first_month_statistic;

} Record;

typedef struct {
    Record *records;
    size_t size;
    size_t size_mult;
    size_t capacity;

} Blog;

Record *create_records(size_t capacity);


Blog *create_blog(size_t capacity);

size_t find_place(Blog *bl, Record *rec);

void shift_records(Blog *bl, size_t n);

bool resize_records(Blog *bl);

bool insert_element(Blog *bl, Record *rec);

void print_records(Blog *bl, size_t n);

void free_blog(Blog **bl);

#endif //TECHNO_IZ1_STORAGE_H
