################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Exercise1.c \
../src/boutput.c \
../src/char.c \
../src/mbyte.c \
../src/umbyte.c \
../src/xoutput.c 

OBJS += \
./src/Exercise1.o \
./src/boutput.o \
./src/char.o \
./src/mbyte.o \
./src/umbyte.o \
./src/xoutput.o 

C_DEPS += \
./src/Exercise1.d \
./src/boutput.d \
./src/char.d \
./src/mbyte.d \
./src/umbyte.d \
./src/xoutput.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


