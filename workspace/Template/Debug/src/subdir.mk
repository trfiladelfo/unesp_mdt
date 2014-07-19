################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/blinky.c \
../src/startup_gcc.c 

OBJS += \
./src/blinky.o \
./src/startup_gcc.o 

C_DEPS += \
./src/blinky.d \
./src/startup_gcc.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	arm-none-eabi-gcc -DPART_LM4F120H5QR -DARM_MATH_CM4 -DTARGET_IS_BLIZZARD_RA1 -I/home/unesp/Projects/unesp_mdt/boards/SW-TM4C-2.0.1.11577 -O0 -g3 -Wall -c -fmessage-length=0 -mthumb -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=softfp -ffunction-sections -fdata-sections -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


