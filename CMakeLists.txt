cmake_minimum_required (VERSION 3.16)
project (myglog VERSION 1.0)

find_package(glog REQUIRED)

add_executable (glogExample glogExample.cc)
target_link_libraries (glogExample glog::glog)