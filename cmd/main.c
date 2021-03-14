//
// Created by fillinmar on 11.03.2021.
//

#include "processing.h"
#include "storage.h"
#include <stdio.h>
#include <string.h>

char get_char() {
    char c = '\0';
    int result = 0;

    do {
        result = scanf("%c", &c);
    } while (result != 1);

    return c;
};
// Returns NUL on error
char *get_string() {
    struct buffer {
        char *string;
        size_t size;
        size_t cap;
    } buf = {NULL, 0, 0};
    char c = '\0';

    while (c = get_char(), c != EOF && c != '\n') {
        if (buf.size + 1 >= buf.cap) {
            size_t new_cap = !buf.cap ? 1 : buf.cap * 2;

            char *tmp = (char *) malloc((new_cap + 1) * sizeof(char));

            if (!tmp) {
                if (buf.string) {
                    free(buf.string);
                }
                return NULL;
            }

            if (buf.string) {
                tmp = strcpy(tmp, buf.string);
                free(buf.string);
            }

            buf.string = tmp;
            buf.cap = new_cap;
        }

        buf.string[buf.size] = c;
        buf.string[buf.size + 1] = '\0';
        ++buf.size;
    }

    return buf.string;
};
//typedef struct {
//    char *name;
//    char *content;
//    char *tags;
//    int comments; // numbers in the first month
//    int marks; // the same
//    char *date;
//} Metadata;
//
//
//typedef struct {
//    size_t size;
//    size_t capacity;
//
//    Metadata *data;
//} Element;
//
//typedef struct {
//    size_t size_multiplier;
//    size_t size;
//    size_t capacity;
//    size_t load_maximum;
//
//    size_t hash_base;
//    size_t step;
//
//    Element *map;
//} Storage;
void print_values(Storage *st) {
    printf("output:\n");
    printf("{\n");

    for (size_t i = 0; i < st->capacity; ++i) {
        if (st->map[i].data == NULL) {
            continue;
        }
        printf("\t{\n");
        printf("\t\tType: %s;\n", st->map[i].data[0].name);

        printf("\t\tElements:[\n");
        for (size_t j = 0; j < st->map[i].size; ++j) {
            printf("\t\t\t{\n");
            printf("\t\t\t\tName: %s;\n", st->map[i].data[j].name);
            printf("\t\t\t\tColour: %d;\n", st->map[i].data[j].comments);
            printf("\t\t\t};\n");
        }

        printf("\t\t];\n");

        printf("\t};\n");

    }

    printf("};");
};
//#include "processing.h"
//#include "storage.h"


int main() {
    Metadata blog;

    printf("Введите название блога\n");
    char *name = get_string();
//    printf(name); printf("\n");
//    printf("Введите содержимое\n");
//     scanf( blog.content);
//     printf("Введите тэги\n");
//     scanf( blog.tags);
    printf("Введите кол-во комент за 1 месяц\n");
//    scanf("%d", &blog.comments);
//    printf("%d", blog.comments); printf("\n");
//
//     scanf(  blog.comments);
//     printf("Введите кол-во оценок за 1 месяц\n");
//     scanf( blog.marks);
//     printf("Введите дату опубликования\n");
//     scanf( blog.date);
//     print_values()
    return 0;
}
