cmake_minimum_required(VERSION 3.26)
set(CMAKE_CXX_STANDARD 17)

set(PROJECT_NAME "the-lion-warcasters-server")
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME}
        Source/Main.cpp
        Source/Network/Platforms.cpp
        Source/Network/Platforms.h
        Source/Network/NetUtils.cpp
        Source/Network/NetUtils.h
        Source/Network/Packet.cpp
        Source/Network/Packet.h
)

if(WIN32)
    target_link_libraries(${PROJECT_NAME} PRIVATE ws2_32)
endif ()