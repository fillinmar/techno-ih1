//
// Created by fillinmar on 15.03.2021.
//

#include <gtest/gtest.h>

extern "C" {
#include "blog.h"
#include <stdlib.h>
}

const size_t capacity = 2;
const size_t capacity_extended = 5;
const size_t capacity_expected= 4;
const size_t insert_place_with_two_elements =1;
const size_t size_mult = 2;

TEST(INITIALIZE, CREATE_RECORDS) {
    Record* current_records = create_records(capacity);
    EXPECT_TRUE(current_records != NULL);

    for(size_t i = 0; i < capacity; ++i) {
        EXPECT_TRUE(current_records[i].comments == NULL);
        EXPECT_TRUE(current_records[i].marks == NULL);
        ASSERT_EQ(current_records[i].date , 0);
        ASSERT_EQ(current_records[i].first_month_statistic,0);
        EXPECT_TRUE(current_records[i].name == NULL);
        EXPECT_TRUE(current_records[i].content == NULL);
        EXPECT_TRUE(current_records[i].tags == NULL);
    }

    free(current_records);
}

TEST(INITIALIZE, CREATE_BLOG) {
    Blog *current_bl = create_blog(capacity, size_mult);
    ASSERT_TRUE(current_bl != NULL);
    ASSERT_EQ( 0, current_bl->size);
    ASSERT_EQ( size_mult, current_bl->size_mult);
    ASSERT_EQ(capacity, current_bl->capacity);

    free_blog(&current_bl);
    EXPECT_TRUE(current_bl == NULL);
}

TEST(ADD_RECORD, FIND_PLACE) {
    Blog *current_bl = create_blog(capacity_extended, size_mult);
    EXPECT_TRUE(current_bl != NULL);
    current_bl->size = 2;
    current_bl->records[0].first_month_statistic =4;
    current_bl->records[1].first_month_statistic =6;

    Record input_record;
    input_record.comments = NULL;
    input_record.marks = NULL;
    input_record.name = NULL;
    input_record.content =NULL;
    input_record.tags = NULL;
    input_record.first_month_statistic = 5;
    find_place(current_bl, &input_record);
    ASSERT_EQ(insert_place_with_two_elements,find_place(current_bl, &input_record));

    free_blog(&current_bl);
    EXPECT_TRUE(current_bl == NULL);
}

TEST(ADD_RECORD, RESIZE_RECORDS) {
    Blog *current_bl = create_blog(capacity, size_mult);
    EXPECT_TRUE(current_bl != NULL);

    EXPECT_TRUE(resize_records(current_bl));
    ASSERT_EQ(capacity_expected,current_bl->capacity);

    free_blog(&current_bl);
    EXPECT_TRUE(current_bl == NULL);
}


TEST(ADD_RECORD, INSERT_ONE_ELEMENT_TO_EMPTY_BLOG) {
    Blog *current_bl = create_blog(capacity, size_mult);
    EXPECT_TRUE(current_bl != NULL);

    Record input_record;

    input_record.comments = NULL;
    input_record.marks = NULL;
    input_record.name = NULL;
    input_record.content =NULL;
    input_record.tags = NULL;
    EXPECT_TRUE(insert_element(current_bl,&input_record));

    free_blog(&current_bl);
    EXPECT_TRUE(current_bl == NULL);
}



