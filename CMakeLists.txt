cmake_minimum_required(VERSION 2.8)

project(Kvasir)

enable_testing()

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -pedantic -Wold-style-cast")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DBRIGAND_NO_BOOST_SUPPORT -I ${CMAKE_CURRENT_SOURCE_DIR}/Lib/")

set(CMAKE_DEBUG_POSTFIX "d")

set ( MPL_GROUP
    Lib/MPL/Types.hpp
    )
    
set ( REGISTER_GROUP
    Lib/Register/Apply.hpp
    )

#add_library(Kvasir
#    ${MPL_GROUP}
#    ${REGISTER_GROUP}
#    )
#SET_TARGET_PROPERTIES(Kvasir PROPERTIES LINKER_LANGUAGE CXX)



set(TestFiles
    test/apply.cpp
  )

add_executable(KvasirTest ${TestFiles})

add_test(Kvasir KvasirTest)

install ( DIRECTORY ${PROJECT_SOURCE_DIR}/Lib
          DESTINATION .
        )
