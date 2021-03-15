//
// Created by fillinmar on 11.03.2021.
//
#include "processing.h"
#include "storage.h"
#include "date.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>


const size_t size = 0;
const size_t capacity = 2;

const char *menu = "menu";
const char *print = "print";
const char *add_extra = "add";
const char *stop = "stop";

int main() {
    Blog *bl = create_blog(capacity);
    if (bl == NULL) {
        printf("\nfailed to allocate memory; stopping execution...");
    }
    char *cmd = "menu";

    do {
        if (!strcmp(cmd, menu)) {
            printf("HELP: \n");
            printf("\t'menu' - to show commands\n");
            printf("\t'print' - to print popular records during the first month\n");
            printf("\t'add' - to add blog\n");
            printf("\t'stop' - to stop execution\n");
            continue;
        }

        if (!strcmp(cmd, stop)) {
            break;
        }

        if (!strcmp(cmd, print)) {
            printf("Input count of search records ");
            size_t n = get_int();
            print_records(bl, n);
            continue;
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

            printf("Input date of this blog (must be an integer) YYYYMMDD: ");
            int date = get_int();
            if (!check_input_date(date)) {
                printf("\nWrong input date");
                break;
            }
            int next_month_record = get_next_month(date);


            int first_month_statistic = 0;

            Comments *comments;

            printf("Count of records' comments: ");
            int count_comms = get_int();

            comments = (Comments *) malloc(count_comms * sizeof(Comments));
            if (!comments) {
                printf("Sorry failed to add comments to record");
                break;
            }

            for (int i = 0; i < count_comms; i++) {
                printf("Input content of comment number %d: ", i + 1);
                comments[i].content = get_string();
                printf("Input date of comment number %d: ", i + 1);
                int date_comment = get_int();
                if (!check_month_get(next_month_record, date, date_comment)) {
                    first_month_statistic++;
                }
            }

            Marks *marks;

            printf("How many marks has the blog: ");
            int count_marks = get_int();

            marks = (Marks *) malloc(count_marks * sizeof(Marks));
            if (!marks) {
                printf("Sorry failed to add marks to record");
                break;
            }

            for (int i = 0; i < count_marks; i++) {
                printf("Input mark number %d: ", i + 1);
                marks[i].marks = get_int();
                printf("Input date of mark number %d: ", i + 1);
                int date_mark = get_int();
                if (!check_month_get(next_month_record, date, date_mark)) {
                    first_month_statistic++;
                }
            }

            Record record = {name, content, tags, comments, marks, date, first_month_statistic};
            if (!insert_element(bl, &record)) {
                printf("AAAAAAAAAA");
                break;
            };
            continue;
        }

        printf("unknown command: %s\n", cmd);
    } while (printf("\nInput command: "), cmd = get_string(), cmd != NULL);


    free_blog(&bl);

    return 0;
}

