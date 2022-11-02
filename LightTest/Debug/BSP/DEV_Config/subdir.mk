################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BSP/DEV_Config/DEV_Config.c 

OBJS += \
./BSP/DEV_Config/DEV_Config.o 

C_DEPS += \
./BSP/DEV_Config/DEV_Config.d 


# Each subdirectory must supply rules for building sources it contributes
BSP/DEV_Config/%.o BSP/DEV_Config/%.su: ../BSP/DEV_Config/%.c BSP/DEV_Config/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I"/home/budali11/git_download/AS7341-Optical-sensors/LightTest/APP" -I"/home/budali11/git_download/AS7341-Optical-sensors/LightTest/BSP" -I"/home/budali11/git_download/AS7341-Optical-sensors/LightTest/BSP/AS7341_Driver" -I"/home/budali11/git_download/AS7341-Optical-sensors/LightTest/BSP/DEV_Config" -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"/home/budali11/git_download/AS7341-Optical-sensors/LightTest/APP/data_process" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-BSP-2f-DEV_Config

clean-BSP-2f-DEV_Config:
	-$(RM) ./BSP/DEV_Config/DEV_Config.d ./BSP/DEV_Config/DEV_Config.o ./BSP/DEV_Config/DEV_Config.su

.PHONY: clean-BSP-2f-DEV_Config

