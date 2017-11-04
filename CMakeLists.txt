cmake_minimum_required(VERSION 3.2)

project(Kvasir)


set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)
set(CMAKE_DEBUG_POSTFIX "d")

# build configurations should not appear in modern cmake!
if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  # using GCC
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -pedantic -Wold-style-cast -I ${CMAKE_CURRENT_SOURCE_DIR}/Lib/")
endif()

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

add_library(Kvasir ${MPL_GROUP} ${REGISTER_GROUP})
target_include_directories(Kvasir PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Lib)
set_target_properties(Kvasir PROPERTIES LINKER_LANGUAGE CXX)
target_compile_definitions(Kvasir PUBLIC "DBRIGAND_NO_BOOST_SUPPORT")

# test should go in extra file
enable_testing()
add_executable(KvasirTest
    test/apply.cpp
    test/usb.cpp
	test/main.cpp
)
target_link_libraries(KvasirTest PRIVATE Kvasir)
add_test(Kvasir KvasirTest)

# install
install(DIRECTORY ${PROJECT_SOURCE_DIR}/Lib
        DESTINATION .
)
