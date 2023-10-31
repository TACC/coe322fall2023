################################################################
####
#### This source file is part of the course
#### Introduction to Scientific Programming in C++ and Fortran
#### by Victor Eijkhout (eijkhout@tacc.utexas.edu)
#### copyright 2017-2023 Victor Eijkhout
####
#### CMakeLists.txt : cmake configuration loading catch2
####
################################################################

cmake_minimum_required( VERSION 3.17 )
project( zeroclass VERSION 1.0 )

##
## Extra packages: catch2
##
find_package( PkgConfig REQUIRED )
pkg_check_modules( CATCH2 REQUIRED catch2-with-main )

##
## main
##

## add_executable( zeromain
##     zeroclassmain.cpp zeroclasslib.cpp zeroclasslib.hpp )
## target_compile_features( zeromain PRIVATE cxx_std_17 )
## target_include_directories( 
## 	zeromain PUBLIC ${CATCH2_INCLUDE_DIRS}
## 	)

## set_target_properties(
## 	zeromain PROPERTIES
## 	BUILD_RPATH   "${CATCH2_LIBRARY_DIRS}"
## 	INSTALL_RPATH "${CATCH2_LIBRARY_DIRS}"
##     )
## target_link_directories(
## 	zeromain PUBLIC ${CATCH2_LIBRARY_DIRS}
## 	)

## target_link_libraries(
## 	zeromain PUBLIC ${CATCH2_LIBRARIES}
## 	)

##
## tester
##

add_executable( zerotest
    zeroclasstest.cpp zeroclasslib.cpp zeroclasslib.hpp )

target_include_directories( 
	zerotest PUBLIC ${CATCH2_INCLUDE_DIRS}
	)

target_link_directories(
	zerotest PUBLIC	${CATCH2_LIBRARY_DIRS}
	)
target_link_libraries(
	zerotest PUBLIC ${CATCH2_LIBRARIES}
	)

set_target_properties(
	zerotest PROPERTIES
	BUILD_RPATH   "${CATCH2_LIBRARY_DIRS}"
	INSTALL_RPATH "${CATCH2_LIBRARY_DIRS}"
    )

target_compile_features( zerotest PRIVATE cxx_std_17 )

