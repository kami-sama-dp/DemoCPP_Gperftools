cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(DemoCPP)

# 添加头文件, include头文件时搜索的所有目录
include_directories("/usr/local/include/")
# 将目标文件与库文件进行链接
link_directories("/usr/local/lib/")




set(SRC_LIST DongtaiGuihua.cpp heap_test.cpp )



add_executable(result ${SRC_LIST})

TARGET_LINK_LIBRARIES(result tcmalloc_and_profiler)

#TARGET_LINK_LIBRARIES(result profiler)
#TARGET_LINK_LIBRARIES(result tcmalloc)