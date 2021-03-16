//
// Created by fillinmar on 15.03.2021.
//

#ifndef TECHNO_IZ1_DATE_H
#define TECHNO_IZ1_DATE_H

#include <stdbool.h>
#include <stdio.h>

int get_next_month(int date);
bool check_month_get(int  next_date_of_record, int date_of_record, int date_of_action);
bool check_input_date (int date);

#endif
