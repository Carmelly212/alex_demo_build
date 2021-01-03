add_library(mylib1 SHARED
)  
target_sources(mylib1
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/mylib1.cpp
    ${CMAKE_CURRENT_LIST_DIR}/lib1_priv.h
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/ext_api/mylib1.h
)

target_include_directories(mylib1
  PUBLIC ext_api
)