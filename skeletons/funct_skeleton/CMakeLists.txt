cmake_minimum_required( VERSION 3.12 )
project( funct VERSION 1.0 )

add_executable( funct functmain.cpp funct.cpp functheader.hpp )
install( TARGETS funct DESTINATION . )
