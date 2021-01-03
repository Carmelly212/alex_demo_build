add_executable(utest_infra
main.cpp)

target_link_libraries(utest_infra
    PRIVATE
        mylib1
        mylib2)   