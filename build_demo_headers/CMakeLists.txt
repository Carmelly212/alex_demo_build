add_library(my_api INTERFACE)

target_sources(my_api
    INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}/my_api/my_api.h)

target_include_directories(my_api
    INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}/my_api)   

add_subdirectory(utest)