cmake_minimum_required(VERSION 3.10)

project(LED_Blinker VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Define library for LED implementation
add_library(led_lib STATIC src/LED.cpp
                           src/Blinker.cpp)

# Add include path for headers
target_include_directories(led_lib PUBLIC include)

# Define executable
add_executable(LED_Blinker main.cpp)

# Link the library to the executable
target_link_libraries(LED_Blinker PRIVATE led_lib)