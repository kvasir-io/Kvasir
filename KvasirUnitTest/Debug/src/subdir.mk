################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CoreM0UnitTest.cpp \
../src/CoreM3UnitTest.cpp \
../src/MPLUnitTest.cpp \
../src/RegUnitTest.cpp 

OBJS += \
./src/CoreM0UnitTest.o \
./src/CoreM3UnitTest.o \
./src/MPLUnitTest.o \
./src/RegUnitTest.o 

CPP_DEPS += \
./src/CoreM0UnitTest.d \
./src/CoreM3UnitTest.d \
./src/MPLUnitTest.d \
./src/RegUnitTest.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C++ Compiler'
	arm-none-eabi-c++ -std=c++0x -D__NEWLIB__ -DDEBUG -D__CODE_RED -I"C:\Users\Stephanos\Documents\workspaces\Kvasir\Kvasir\src" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -fno-rtti -fno-exceptions -mcpu=cortex-m0 -mthumb -D__NEWLIB__ -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


