cmake_minimum_required( VERSION 3.12 ) 
project( victorsprogram VERSION 1.0 )

add_executable( victorsez program.cpp )
install( TARGETS victorsez DESTINATION . )
