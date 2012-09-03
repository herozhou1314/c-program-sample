################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Sample.c \
../src/Smaple2.c \
../src/Util_print.c 

OBJS += \
./src/Sample.o \
./src/Smaple2.o \
./src/Util_print.o 

C_DEPS += \
./src/Sample.d \
./src/Smaple2.d \
./src/Util_print.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


