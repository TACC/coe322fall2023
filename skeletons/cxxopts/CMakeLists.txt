cmake_minimum_required( VERSION 3.12 )
project( commandline VERSION 1.0 )

add_executable( commandline commandline.cpp )
target_compile_features( commandline PRIVATE cxx_std_17 )

##
## Extra package: cxxopts
##
find_package( PkgConfig REQUIRED )
pkg_check_modules( OPTS REQUIRED cxxopts )
target_include_directories(
        commandline PUBLIC
        ${OPTS_INCLUDE_DIRS}
        )

install( TARGETS commandline DESTINATION . )
