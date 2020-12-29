
add_executable(utest utest/main.cpp) 


target_link_libraries(utest PRIVATE demolib)

target_include_directories(utest
    PUBLIC my_api
    PUBLIC utest)

