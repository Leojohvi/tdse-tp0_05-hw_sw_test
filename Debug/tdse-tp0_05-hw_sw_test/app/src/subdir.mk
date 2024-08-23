################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../tdse-tp0_05-hw_sw_test/app/src/app.c \
../tdse-tp0_05-hw_sw_test/app/src/logger.c \
../tdse-tp0_05-hw_sw_test/app/src/task_a.c \
../tdse-tp0_05-hw_sw_test/app/src/task_b.c \
../tdse-tp0_05-hw_sw_test/app/src/task_c.c 

OBJS += \
./tdse-tp0_05-hw_sw_test/app/src/app.o \
./tdse-tp0_05-hw_sw_test/app/src/logger.o \
./tdse-tp0_05-hw_sw_test/app/src/task_a.o \
./tdse-tp0_05-hw_sw_test/app/src/task_b.o \
./tdse-tp0_05-hw_sw_test/app/src/task_c.o 

C_DEPS += \
./tdse-tp0_05-hw_sw_test/app/src/app.d \
./tdse-tp0_05-hw_sw_test/app/src/logger.d \
./tdse-tp0_05-hw_sw_test/app/src/task_a.d \
./tdse-tp0_05-hw_sw_test/app/src/task_b.d \
./tdse-tp0_05-hw_sw_test/app/src/task_c.d 


# Each subdirectory must supply rules for building sources it contributes
tdse-tp0_05-hw_sw_test/app/src/%.o tdse-tp0_05-hw_sw_test/app/src/%.su tdse-tp0_05-hw_sw_test/app/src/%.cyclo: ../tdse-tp0_05-hw_sw_test/app/src/%.c tdse-tp0_05-hw_sw_test/app/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../app/inc -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-tdse-2d-tp0_05-2d-hw_sw_test-2f-app-2f-src

clean-tdse-2d-tp0_05-2d-hw_sw_test-2f-app-2f-src:
	-$(RM) ./tdse-tp0_05-hw_sw_test/app/src/app.cyclo ./tdse-tp0_05-hw_sw_test/app/src/app.d ./tdse-tp0_05-hw_sw_test/app/src/app.o ./tdse-tp0_05-hw_sw_test/app/src/app.su ./tdse-tp0_05-hw_sw_test/app/src/logger.cyclo ./tdse-tp0_05-hw_sw_test/app/src/logger.d ./tdse-tp0_05-hw_sw_test/app/src/logger.o ./tdse-tp0_05-hw_sw_test/app/src/logger.su ./tdse-tp0_05-hw_sw_test/app/src/task_a.cyclo ./tdse-tp0_05-hw_sw_test/app/src/task_a.d ./tdse-tp0_05-hw_sw_test/app/src/task_a.o ./tdse-tp0_05-hw_sw_test/app/src/task_a.su ./tdse-tp0_05-hw_sw_test/app/src/task_b.cyclo ./tdse-tp0_05-hw_sw_test/app/src/task_b.d ./tdse-tp0_05-hw_sw_test/app/src/task_b.o ./tdse-tp0_05-hw_sw_test/app/src/task_b.su ./tdse-tp0_05-hw_sw_test/app/src/task_c.cyclo ./tdse-tp0_05-hw_sw_test/app/src/task_c.d ./tdse-tp0_05-hw_sw_test/app/src/task_c.o ./tdse-tp0_05-hw_sw_test/app/src/task_c.su

.PHONY: clean-tdse-2d-tp0_05-2d-hw_sw_test-2f-app-2f-src

