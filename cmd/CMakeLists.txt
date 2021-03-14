#cmake_minimum_required(VERSION 3.17)
#project(untitled3 C)
#
#set(CMAKE_C_STANDARD 99)
#
#add_executable(untitled3 main.c)
set(MAIN_SRCS main.c)

add_executable(main ${MAIN_SRCS})

target_link_libraries(main storage input_processing)
#
#install(TARGETS main DESTINATION bin)