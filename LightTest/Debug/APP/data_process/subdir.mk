################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/data_process/Ra_calculate.c 

OBJS += \
./APP/data_process/Ra_calculate.o 

C_DEPS += \
./APP/data_process/Ra_calculate.d 


# Each subdirectory must supply rules for building sources it contributes
APP/data_process/%.o APP/data_process/%.su: ../APP/data_process/%.c APP/data_process/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I"/home/budali11/git_download/AS7341-Optical-sensors/LightTest/APP" -I"/home/budali11/git_download/AS7341-Optical-sensors/LightTest/BSP" -I"/home/budali11/git_download/AS7341-Optical-sensors/LightTest/BSP/AS7341_Driver" -I"/home/budali11/git_download/AS7341-Optical-sensors/LightTest/BSP/DEV_Config" -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"/home/budali11/git_download/AS7341-Optical-sensors/LightTest/APP/data_process" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-APP-2f-data_process

clean-APP-2f-data_process:
	-$(RM) ./APP/data_process/Ra_calculate.d ./APP/data_process/Ra_calculate.o ./APP/data_process/Ra_calculate.su

.PHONY: clean-APP-2f-data_process

