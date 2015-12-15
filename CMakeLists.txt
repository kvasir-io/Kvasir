cmake_minimum_required(VERSION 2.8)

project(Kvasir)

enable_testing()

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -pedantic -Wold-style-cast")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DBRIGAND_NO_BOOST_SUPPORT -I ${PROJECT_SOURCE_DIR}/Lib")

set(CMAKE_DEBUG_POSTFIX "d")

set ( MPL_GROUP
    Lib/MPL/Types.hpp
    )

source_group(Kvasir FILES ${MPL_GROUP})

#add_library(Kvasir
#    ${MPL_GROUP})
#SET_TARGET_PROPERTIES(XYZ PROPERTIES LINKER_LANGUAGE C)

set(test_files
    test/apply.cpp
  )

source_group(tests FILES ${test_files})

add_executable(KvasirTest ${test_files})

add_test(Kvasir KvasirTest)

#install ( DIRECTORY ${PROJECT_SOURCE_DIR}/brigand
#          DESTINATION .
#        )
