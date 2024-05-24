cmake_minimum_required(VERSION 3.28)
project(gui)

set(CMAKE_CXX_STANDARD 17)

add_executable(gui main.cpp)

find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})

target_link_libraries(gui ${wxWidgets_LIBRARIES})
#target_include_directories(
#        gui
#        PRIVATE
#        /opt/homebrew/Cellar/wxwidgets/3.2.5/include
#        /opt/homebrew/Cellar/wxwidgets/3.2.5/lib/wx/include
#)
#
#target_link_libraries(
#        gui
#        PRIVATE
#        /opt/homebrew/Cellar/wxwidgets/3.2.5/lib/
#)