//
// Created by fillinmar on 15.03.2021.
//

#include <gtest/gtest.h>

extern "C" {
#include "storage.h"
#include <stdlib.h>
}

const size_t capacity = 2;

TEST(DATE_CHECK, GET_NEXT_MONTH) {
    Record* current_records = create_records(capacity);
    EXPECT_TRUE(current_records != NULL);

    for(size_t i = 0; i < capacity; ++i) {
        EXPECT_TRUE(current_records[i].comments == NULL);
        EXPECT_TRUE(current_records[i].marks == NULL);
        ASSERT_EQ(current_records[i].date , 0);
        ASSERT_EQ(current_records[i].first_month_statistic,0);
    }

    free(current_records);
}