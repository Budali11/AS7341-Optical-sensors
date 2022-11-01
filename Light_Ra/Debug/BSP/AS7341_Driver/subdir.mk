################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BSP/AS7341_Driver/Waveshare_AS7341.c 

OBJS += \
./BSP/AS7341_Driver/Waveshare_AS7341.o 

C_DEPS += \
./BSP/AS7341_Driver/Waveshare_AS7341.d 


# Each subdirectory must supply rules for building sources it contributes
BSP/AS7341_Driver/%.o BSP/AS7341_Driver/%.su: ../BSP/AS7341_Driver/%.c BSP/AS7341_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/APP" -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/BSP" -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/BSP/AS7341_Driver" -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/BSP/DEV_Config" -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/APP/data_process" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-BSP-2f-AS7341_Driver

clean-BSP-2f-AS7341_Driver:
	-$(RM) ./BSP/AS7341_Driver/Waveshare_AS7341.d ./BSP/AS7341_Driver/Waveshare_AS7341.o ./BSP/AS7341_Driver/Waveshare_AS7341.su

.PHONY: clean-BSP-2f-AS7341_Driver

