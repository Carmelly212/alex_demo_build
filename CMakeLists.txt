cmake_minimum_required(VERSION 3.12)
project(demo_app LANGUAGES C CXX)

add_subdirectory(build_demo_headers)
add_subdirectory(build_demo_infra)
add_subdirectory(build_demo_app)