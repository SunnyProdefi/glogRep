cmake_minimum_required (VERSION 3.16)
project (myglog VERSION 1.0)

include_directories(/usr/include/glog)
link_directories(/usr/lib/x86_64-linux-gnu)

add_executable (glogExample glogExample.cc)
target_link_libraries (glogExample glog)