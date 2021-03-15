//
// Created by fillinmar on 15.03.2021.
//

#include <gtest/gtest.h>

extern "C" {
#include "date.h"
}

const int current_date = 20210301;
const int expected_date = 20210401;

TEST(DATE_CHECK, GET_NEXT_MONTH) {
    ASSERT_EQ(expected_date, get_next_month(current_date));
}