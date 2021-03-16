//
// Created by fillinmar on 15.03.2021.
//

#include "date.h"
#include <stdbool.h>

int get_next_month(int date) {
    int day = date % 100;
    int month = (date / 100) % 100 + 1;
    int year = date / 10000;
    if (month == 13) {
        month = 1;
        year++;
    }
    return (year * 10000 + month * 100 + day);
};

bool check_input_date(int date) {
    int day = date % 100;

    int month = (date / 100) % 100;

    if ((day > 0 && day <= 31) && (month > 0 && month <= 12)) {
        return true;
    }
    return false;
};

bool check_month_get(int next_date_of_record, int date_of_record, int date_of_action) {
    if (date_of_record <= date_of_action && date_of_action <= next_date_of_record)
        return true;
    return false;
}
