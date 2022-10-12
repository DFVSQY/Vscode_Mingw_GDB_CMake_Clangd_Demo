# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.0)

# 用于产生compile_commands.json文件
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 项目信息
project(Main)

# 查找src目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(src DIR_SRCS)

# 添加头文件目录
include_directories(includes)

# 如果使用mingw工具链
# 编译时打开所有警告
if(MINGW)
	add_compile_options(-Wall)
endif()

# 指定生成目标
add_executable(main ${DIR_SRCS})
