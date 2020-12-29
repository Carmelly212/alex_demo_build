add_library(demolib SHARED
  mylib1/lib1_priv.h
  mylib1/mylib1.cpp
  mylib1/ext_api/mylib1.h
  mylib2/headers/mylib2.h
  mylib2/sources/lib2_priv.h 
  mylib2/sources/mylib2.cpp

)

target_include_directories(demolib
    PUBLIC mylib1
    PUBLIC mylib1/ext_api
    PUBLIC mylib2
    PUBLIC mylib2/headers 
    PUBLIC mylib2/sources) 

add_executable(utest_infra utest/main.cpp)

target_link_libraries(utest_infra PRIVATE demolib)