cmake_minimum_required(VERSION 2.6)
project(fops)

set(fops_VERSION_MAJOR 1)
set(fops_VERSION_MINOR 0)

include_directories(.)

file(GLOB fopslib_src ./fopslib/src/*.cpp)
file(GLOB fopslib_hdr ./fopslib/src/*.h ./fopslib/*.h)

add_library(fopslib STATIC ${fopslib_src} ${fopslib_hdr})

file(GLOB fops_src ./fops/src/*.cpp)
file(GLOB fops_hdr ./fops/src/*.h ./fops/*.h)

add_executable(fops ${fops_src} ${fops_hdr})
target_link_libraries(fops fopslib)
