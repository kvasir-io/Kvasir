cmake_minimum_required(VERSION 3.1)

project(Kvasir)

enable_testing()

#Enable C++11 per default on all targets
set(CMAKE_CXX_STANDARD 11)
set(CXX_STANDARD_REQUIRED TRUE)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    # using Clang
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    # using GCC
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Wold-style-cast")
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel")
    # using Intel C++
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    # using Visual Studio C++
endif()

set(CMAKE_DEBUG_POSTFIX "d")

set(MPL_GROUP
    Lib/Mpl/Types.hpp
    Lib/Mpl/Algorithm.hpp
    Lib/Mpl/IntegralConstants.hpp
    Lib/Mpl/Utility.hpp
    )

set(REGISTER_GROUP
    Lib/Register/Apply.hpp
    Lib/Register/AtomicFactories.hpp
    Lib/Register/Exec.hpp
    Lib/Register/Factories.hpp
    Lib/Register/IsolatedFactories.hpp
    Lib/Register/Register.hpp
    Lib/Register/Seam.hpp
    Lib/Register/Types.hpp
    Lib/Register/Utility.hpp
    )

add_library(Kvasir
    ${MPL_GROUP}
    ${REGISTER_GROUP}
    )
set_target_properties(Kvasir PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(Kvasir PUBLIC Lib)

set(TestFiles
    test/apply.cpp
    test/usb.cpp
    test/main.cpp
    )

add_executable(KvasirTest ${TestFiles})
target_link_libraries(KvasirTest Kvasir)

add_test(Kvasir KvasirTest)

install(DIRECTORY ${PROJECT_SOURCE_DIR}/Lib
        DESTINATION .
        )
