set(BLOG_SRC blog.h blog.c)

add_library(blog STATIC ${BLOG_SRC})

target_include_directories(blog PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})