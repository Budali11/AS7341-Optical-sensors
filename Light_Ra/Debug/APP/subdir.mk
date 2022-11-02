################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/Getdata_test.c \
../APP/Getflicker_test.c \
../APP/INT_test.c \
../APP/Syns_test.c \
../APP/clear.c 

OBJS += \
./APP/Getdata_test.o \
./APP/Getflicker_test.o \
./APP/INT_test.o \
./APP/Syns_test.o \
./APP/clear.o 

C_DEPS += \
./APP/Getdata_test.d \
./APP/Getflicker_test.d \
./APP/INT_test.d \
./APP/Syns_test.d \
./APP/clear.d 


# Each subdirectory must supply rules for building sources it contributes
APP/%.o APP/%.su: ../APP/%.c APP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I"/home/budali11/git_download/AS7341-Optical-sensors/Light_Ra/APP" -I"/home/budali11/git_download/AS7341-Optical-sensors/Light_Ra/BSP" -I"/home/budali11/git_download/AS7341-Optical-sensors/Light_Ra/BSP/AS7341_Driver" -I"/home/budali11/git_download/AS7341-Optical-sensors/Light_Ra/BSP/DEV_Config" -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-APP

clean-APP:
	-$(RM) ./APP/Getdata_test.d ./APP/Getdata_test.o ./APP/Getdata_test.su ./APP/Getflicker_test.d ./APP/Getflicker_test.o ./APP/Getflicker_test.su ./APP/INT_test.d ./APP/INT_test.o ./APP/INT_test.su ./APP/Syns_test.d ./APP/Syns_test.o ./APP/Syns_test.su ./APP/clear.d ./APP/clear.o ./APP/clear.su

.PHONY: clean-APP

