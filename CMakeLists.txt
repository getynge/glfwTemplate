cmake_minimum_required(VERSION 3.8)
project(gltest)

set(CMAKE_CXX_STANDARD 17)

if(WIN32)
    set(PRE_HOME "$ENV{USERPROFILE}")
    set(GL opengl32)
    string(REPLACE "\\" "/" HOME ${PRE_HOME})
else()
    set(HOME $ENV{HOME})
    set(GL gl)
endif()

set(GLFW_PATH ${HOME}/glfw-3.2.1 CACHE PATH "")
set(GLEW_PATH ${HOME}/glew-2.1.0 CACHE PATH "")
set(GLFW_LIB ${GLFW_PATH}/lib CACHE PATH "")
set(GLEW_LIB ${GLEW_PATH}/lib CACHE PATH "")

find_file(GLFW libglfw3.a PATHS ${GLFW_LIB})
find_file(GLEW libglew32.a PATHS ${GLEW_LIB})

set(SOURCE_FILES src/main.cpp src/boilerplate/setup_opengl.cpp src/boilerplate/setup_opengl.h)

include_directories(${GLFW_PATH}/include)
include_directories(${GLEW_PATH}/include)

add_executable(gltest ${SOURCE_FILES})

target_link_libraries(gltest ${GLFW} ${GLEW} ${GL})

