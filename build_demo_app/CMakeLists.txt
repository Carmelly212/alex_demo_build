
add_executable(${PROJECT_NAME} myapp/sources/main.cpp) 

target_link_libraries(${PROJECT_NAME} 
    PRIVATE
        mylib1
        mylib2
        my_api)