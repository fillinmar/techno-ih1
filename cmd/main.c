//
// Created by fillinmar on 11.03.2021.
//
#include "processing.h"
#include "storage.h"
#include <stdio.h>
#include <string.h>

const size_t size_multiplier = 2;
const size_t size = 0;
const size_t capacity = 2;
const size_t load_maximum = 2 / 3;

const size_t hash_base = 519;
const size_t step = 1;

const char *about = "about";
const char *print = "print";
const char *add_extra = "add";
const char *stop = "stop";

int main() {
    Storage *st = create_storage(size_multiplier, size, capacity, load_maximum, hash_base, step);

    char *cmd = "about";

    do {
        if (!strcmp(cmd, about)) {
            printf("HELP: \n");
            printf("\t'about' - command used to output help info about used commands\n");
            printf("\t'print' - command used to print stored values, grouped by type\n");
            printf("\t'add' - command used to add values to storage\n");
            printf("\t'stop' - command used to stop execution\n");
            continue;
        }

        if (!strcmp(cmd, print)) {
            print_values(st);
            continue;
        }

        if (!strcmp(cmd, stop)) {
            break;
        }

        if (!strcmp(cmd, add_extra)) {
            printf("Input name of blog: ");
            char *name = get_string();
            if (name == NULL) {
                printf("\nfailed to allocate memory; stopping execution...");
                break;
            }

            printf("Input content of this blog: ");
            char *content = get_string();

            if (content == NULL) {
                printf("\nfailed to allocate memory; stopping execution...");
                break;
            }

            printf("Input tags of this blog: ");
            char *tags = get_string();

            if (tags == NULL) {
                printf("\nfailed to allocate memory; stopping execution...");
                break;
            }
            printf("Input number of  comments in the first month :");
            int  comments = get_int();

            if (comments == NULL) {
                printf("\nfailed to allocate memory; stopping execution...");
                break;
            }
            printf("Input number of marks in the first month: ");
            int  marks = get_int();

            if (marks == NULL) {
                printf("\nfailed to allocate memory; stopping execution...");
                break;
            }
            printf("Input date of this blog: ");
            char *date = get_int();

            if (date == NULL) {
                printf("\nfailed to allocate memory; stopping execution...");
                break;
            }


            Metadata blog = {name, content, tags, comments, marks, date};

            if (!add(&blog, st)) {
                printf("\nfailed to add blog to storage; stopping execution...");
                break;
            }

            continue;
        }

        printf("unknown command: %s\n", cmd);
    } while (printf("\nInput command: "), cmd = get_string(), cmd != NULL);


    free_storage(&st);

    return 0;
}

//#include "processing.h"
//#include "storage.h"
//#include <stdio.h>
//
//
//
//int main() {
//    Metadata blog;
//
//    printf("Введите название блога\n");
//    char *name = get_string();
//    printf(name); printf("\n");
//    printf("Введите содержимое\n");
//     scanf( blog.content);
//     printf("Введите тэги\n");
//     scanf( blog.tags);
//    printf("Введите кол-во комент за 1 месяц\n");
//    scanf("%d", &blog.comments);
//    printf("%d", blog.comments); printf("\n");
//
//     scanf(  blog.comments);
//     printf("Введите кол-во оценок за 1 месяц\n");
//     scanf( blog.marks);
//     printf("Введите дату опубликования\n");
//     scanf( blog.date);
//     print_values()
//    return 0;
//}
