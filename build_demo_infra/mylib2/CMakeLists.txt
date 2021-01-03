add_library(mylib2 SHARED
)  

target_sources(mylib2
  PRIVATE   
    ${CMAKE_CURRENT_LIST_DIR}/sources/lib2_priv.h
    ${CMAKE_CURRENT_LIST_DIR}/sources/mylib2.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/headers/mylib2.h
)

target_include_directories(mylib2
    PUBLIC headers
    )