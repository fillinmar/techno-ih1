//
// Created by fillinmar on 15.03.2021.
//

#include <gtest/gtest.h>

extern "C" {
#include "date.h"
}

const int current_date = 20210301;
const int expected_date = 20210401;
const int date_of_first_month_action = 20210304;
const int date_of_not_first_month_action = 20210604;
const int wrong1_date = 20211302;
const int wrong2_date = 20211240;

TEST(DATE_CHECK, GET_NEXT_MONTH) {
    ASSERT_EQ(expected_date, get_next_month(current_date));
}


TEST(DATE_CHECK, CHECK_INPUT_DATE) {
    ASSERT_TRUE(check_input_date(current_date));
    ASSERT_FALSE(check_input_date(wrong1_date));
    ASSERT_FALSE(check_input_date(wrong2_date));
}

TEST(DATE_CHECK, CHECK_MONTH_GET) {
    ASSERT_TRUE(check_month_get(expected_date, current_date, date_of_first_month_action));
    ASSERT_FALSE(check_month_get(expected_date, current_date, date_of_not_first_month_action));
}
