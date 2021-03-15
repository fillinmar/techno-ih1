file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(blog_test ${SRCS})

TARGET_LINK_LIBRARIES(blog_test
        storage
        gtest
        )

add_test(NAME blog_test
        COMMAND blog_test)