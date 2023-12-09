################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../hagl/src/bitmap.c \
../hagl/src/clip.c \
../hagl/src/fontx.c \
../hagl/src/hagl.c \
../hagl/src/hsl.c \
../hagl/src/rgb565.c \
../hagl/src/rgb888.c \
../hagl/src/tjpgd.c 

OBJS += \
./hagl/src/bitmap.o \
./hagl/src/clip.o \
./hagl/src/fontx.o \
./hagl/src/hagl.o \
./hagl/src/hsl.o \
./hagl/src/rgb565.o \
./hagl/src/rgb888.o \
./hagl/src/tjpgd.o 

C_DEPS += \
./hagl/src/bitmap.d \
./hagl/src/clip.d \
./hagl/src/fontx.d \
./hagl/src/hagl.d \
./hagl/src/hsl.d \
./hagl/src/rgb565.d \
./hagl/src/rgb888.d \
./hagl/src/tjpgd.d 


# Each subdirectory must supply rules for building sources it contributes
hagl/src/%.o hagl/src/%.su hagl/src/%.cyclo: ../hagl/src/%.c hagl/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -c -I../Core/Inc -I"C:/Users/mrchl/STM32CubeIDE/workspace_1.12.1/CC/CC/hagl/include" -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-hagl-2f-src

clean-hagl-2f-src:
	-$(RM) ./hagl/src/bitmap.cyclo ./hagl/src/bitmap.d ./hagl/src/bitmap.o ./hagl/src/bitmap.su ./hagl/src/clip.cyclo ./hagl/src/clip.d ./hagl/src/clip.o ./hagl/src/clip.su ./hagl/src/fontx.cyclo ./hagl/src/fontx.d ./hagl/src/fontx.o ./hagl/src/fontx.su ./hagl/src/hagl.cyclo ./hagl/src/hagl.d ./hagl/src/hagl.o ./hagl/src/hagl.su ./hagl/src/hsl.cyclo ./hagl/src/hsl.d ./hagl/src/hsl.o ./hagl/src/hsl.su ./hagl/src/rgb565.cyclo ./hagl/src/rgb565.d ./hagl/src/rgb565.o ./hagl/src/rgb565.su ./hagl/src/rgb888.cyclo ./hagl/src/rgb888.d ./hagl/src/rgb888.o ./hagl/src/rgb888.su ./hagl/src/tjpgd.cyclo ./hagl/src/tjpgd.d ./hagl/src/tjpgd.o ./hagl/src/tjpgd.su

.PHONY: clean-hagl-2f-src

