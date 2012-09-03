################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/json.resouse/arraylist.c \
../src/json.resouse/debug.c \
../src/json.resouse/json_object.c \
../src/json.resouse/json_tokener.c \
../src/json.resouse/json_util.c \
../src/json.resouse/linkhash.c \
../src/json.resouse/printbuf.c \
../src/json.resouse/test1.c \
../src/json.resouse/test2.c 

OBJS += \
./src/json.resouse/arraylist.o \
./src/json.resouse/debug.o \
./src/json.resouse/json_object.o \
./src/json.resouse/json_tokener.o \
./src/json.resouse/json_util.o \
./src/json.resouse/linkhash.o \
./src/json.resouse/printbuf.o \
./src/json.resouse/test1.o \
./src/json.resouse/test2.o 

C_DEPS += \
./src/json.resouse/arraylist.d \
./src/json.resouse/debug.d \
./src/json.resouse/json_object.d \
./src/json.resouse/json_tokener.d \
./src/json.resouse/json_util.d \
./src/json.resouse/linkhash.d \
./src/json.resouse/printbuf.d \
./src/json.resouse/test1.d \
./src/json.resouse/test2.d 


# Each subdirectory must supply rules for building sources it contributes
src/json.resouse/%.o: ../src/json.resouse/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


