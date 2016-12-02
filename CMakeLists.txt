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

set(ATOMIC_GROUP
    Lib/Atomic/CriticalSection.hpp
    Lib/Atomic/Integral.hpp
    Lib/Atomic/Queue.hpp
    )

set(CMSIS_GROUP
    Lib/Cmsis/core_cmFunc.h
    )

set(COMMON_GROUP
    Lib/Common/Interrupt.hpp
    Lib/Common/Core.hpp
    Lib/Common/Tags.hpp
    )

set(IO_GROUP
    Lib/Io/PinFactories.hpp
    Lib/Io/Utility.hpp
    Lib/Io/Io.hpp
    Lib/Io/PortFactories.hpp
    Lib/Io/Types.hpp
    )

set(MPL_GROUP
    Lib/Mpl/Algorithm.hpp
    Lib/Mpl/brigand.hpp
    Lib/Mpl/IntegralConstants.hpp
    Lib/Mpl/Types.hpp
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

set(USB_GROUP
    Lib/Usb/Usb.hpp
    Lib/Usb/CdcLineCoding.hpp
    Lib/Usb/HalTraits.hpp
    Lib/Usb/Memory.hpp
    Lib/Usb/Cdc.hpp
    Lib/Usb/Hal/Kinetis/UsbHal.hpp
    Lib/Usb/Hal/Kinetis/Bdt.hpp
    Lib/Usb/SetupPacket.hpp
    Lib/Usb/Packet.hpp
    Lib/Usb/Endpoint.hpp
    Lib/Usb/Device.hpp
    )

add_library(Kvasir
    ${ATOMIC_GROUP}
    ${CMSIS_GROUP}
    ${COMMON_GROUP}
    ${IO_GROUP}
    ${MPL_GROUP}
    ${REGISTER_GROUP}
    ${USB_GROUP}
    )
set_target_properties(Kvasir PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(Kvasir PUBLIC Lib)

set(TEST_FILES
    test/apply.cpp
    test/usb.cpp
    test/main.cpp
    )

add_executable(KvasirTest ${TEST_FILES})
target_link_libraries(KvasirTest Kvasir)

add_test(Kvasir KvasirTest)

install(DIRECTORY ${PROJECT_SOURCE_DIR}/Lib
        DESTINATION .
        )
