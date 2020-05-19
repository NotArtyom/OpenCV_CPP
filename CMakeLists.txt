cmake_minimum_required(VERSION 3.16)
project(OpenCV__)

set(CMAKE_CXX_STANDARD 17)
find_package( OpenCV REQUIRED )

add_executable(OpenCV__ main.cpp detect_aruco.cpp detect_aruco_video.cpp)
target_link_libraries( OpenCV__ ${OpenCV_LIBS} )

add_executable(OpenCV__2 generate_aruco.cpp)
target_link_libraries( OpenCV__2 ${OpenCV_LIBS} )

add_executable(OpenCV__3 detect_aruco.cpp)
target_link_libraries( OpenCV__3 ${OpenCV_LIBS} )