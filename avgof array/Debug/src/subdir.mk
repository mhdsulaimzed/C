################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/avgof\ array.c 

C_DEPS += \
./src/avgof\ array.d 

OBJS += \
./src/avgof\ array.o 


# Each subdirectory must supply rules for building sources it contributes
src/avgof\ array.o: ../src/avgof\ array.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/avgof array.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/avgof\ array.d ./src/avgof\ array.o

.PHONY: clean-src

