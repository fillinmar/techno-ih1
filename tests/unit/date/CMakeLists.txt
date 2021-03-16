file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(date_test ${SRCS})

TARGET_LINK_LIBRARIES(date_test
        date
        gtest
        )

add_test(NAME date_test
        COMMAND date_test)