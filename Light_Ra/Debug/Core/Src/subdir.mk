################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/gpio.c \
../Core/Src/i2c.c \
../Core/Src/main.c \
../Core/Src/retarget.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/usart.c 

OBJS += \
./Core/Src/gpio.o \
./Core/Src/i2c.o \
./Core/Src/main.o \
./Core/Src/retarget.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/usart.o 

C_DEPS += \
./Core/Src/gpio.d \
./Core/Src/i2c.d \
./Core/Src/main.d \
./Core/Src/retarget.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/usart.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/APP" -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/BSP" -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/BSP/AS7341_Driver" -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/BSP/DEV_Config" -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/APP/data_process" -include"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/BSP/bsp_includes.h" -include"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/APP/app_includes.h" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Core/Src/main.o: ../Core/Src/main.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/APP" -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/BSP/AS7341_Driver" -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/BSP/DEV_Config" -I"F:/Cubemx/PRJ/backup/LightTest/LightTest/LightTest/BSP" -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/gpio.d ./Core/Src/gpio.o ./Core/Src/gpio.su ./Core/Src/i2c.d ./Core/Src/i2c.o ./Core/Src/i2c.su ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/retarget.d ./Core/Src/retarget.o ./Core/Src/retarget.su ./Core/Src/stm32f1xx_hal_msp.d ./Core/Src/stm32f1xx_hal_msp.o ./Core/Src/stm32f1xx_hal_msp.su ./Core/Src/stm32f1xx_it.d ./Core/Src/stm32f1xx_it.o ./Core/Src/stm32f1xx_it.su ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f1xx.d ./Core/Src/system_stm32f1xx.o ./Core/Src/system_stm32f1xx.su ./Core/Src/usart.d ./Core/Src/usart.o ./Core/Src/usart.su

.PHONY: clean-Core-2f-Src

