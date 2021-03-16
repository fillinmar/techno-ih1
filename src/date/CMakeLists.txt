set(DATE_SRC date.h date.c)

add_library(date STATIC ${DATE_SRC})

target_include_directories(date PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})