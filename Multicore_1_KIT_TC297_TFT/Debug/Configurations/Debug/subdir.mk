################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Configurations/Debug/sync_on_halt.c 

OBJS += \
./Configurations/Debug/sync_on_halt.o 

COMPILED_SRCS += \
./Configurations/Debug/sync_on_halt.src 

C_DEPS += \
./Configurations/Debug/sync_on_halt.d 


# Each subdirectory must supply rules for building sources it contributes
Configurations/Debug/%.src: ../Configurations/Debug/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING C Compiler'
	ctc -D__CPU__=tc29xb -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Psi5s/Psi5s" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Eth/Phy_Pef7071" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Fce" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Infra/Platform/Tricore/Compilers" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Psi5/Psi5" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gpt12/IncrEnc" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Infra/Platform" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Psi5" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Service/CpuGeneric/If/Ccu6If" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Hssl/Hssl" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm/Tom/PwmHl" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Smu" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ccu6/TimerWithTrigger" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Emem" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Dts/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ebu/Sram" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm/Atom/Timer" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Service/CpuGeneric/SysSe/Comm" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Service/CpuGeneric/SysSe/Math" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Infra/Platform/Tricore" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Dsadc/Rdc" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Asclin/Spi" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Vadc/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Mtu/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Flash" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Vadc" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Infra" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Flash/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Stm" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Cpu/Irq" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ccu6/PwmBc" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Scu" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Service/CpuGeneric/SysSe" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Fce/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Service/CpuGeneric/If" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Multican/Can" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Fft/Fft" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Asclin/Lin" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Sent/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm/Tim" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Src/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Dsadc" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm/Atom/PwmHl" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Hssl/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/_Lib/InternalMux" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Psi5s/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Stm/Timer" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm/Trig" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ccu6/Timer" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Eth" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Dts/Dts" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Eray/Eray" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Dma/Dma" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ccu6/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Cif/Cam" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gpt12/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Psi5s" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Qspi/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Qspi/SpiMaster" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Infra/Sfr" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/I2c" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Service/CpuGeneric/SysSe/Bsp" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Service/CpuGeneric/SysSe/General" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Cpu/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ebu" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Dma/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Msc" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Configurations" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Fce/Crc" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ebu/BFlashSt" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Iom/Driver" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Vadc/Adc" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Port/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Cif" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm/Tom" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Asclin/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Stm/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm/Atom/Pwm" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Iom/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/I2c/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/_PinMap" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Service/CpuGeneric" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Cpu/CStart" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ccu6" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ebu/BFlashSpansion" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Cpu" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Msc/Msc" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Mtu" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm/Tim/In" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Dsadc/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Qspi/SpiSlave" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Service/CpuGeneric/SysSe/Time" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/_Impl" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Cpu/Trap" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Infra/Sfr/TC29B/_Reg" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Asclin" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm/Atom" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Dsadc/Dsadc" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Eray/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ebu/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm/Tom/Pwm" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Scu/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Fft" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Psi5/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Sent/Sent" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ccu6/TPwm" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm/Tom/Timer" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Smu/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Port" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Service" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/I2c/I2c" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Fft/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Port/Io" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Iom" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Infra/Sfr/TC29B" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Cif/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Emem/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Service/CpuGeneric/StdIf" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/_Lib/DataHandling" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Multican" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Asclin/Asc" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Qspi" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Sent" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Configurations/Debug" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Eray" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Eth/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Hssl" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/Service/CpuGeneric/_Utilities" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Dts" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ccu6/PwmHl" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/_Lib" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ebu/Dram" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Ccu6/Icu" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gpt12" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Multican/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Src" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Dma" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Gtm/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/Libraries/iLLD/TC29B/Tricore/Msc/Std" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/AppSrc/Lwip/lwip-1.4.1/src/include/ipv4" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/AppSrc/Lwip/lwip-1.4.1/src/include" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/AppSrc/Config/Common" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/AppSrc/Lwip/port/include" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/AppSrc/Tricore" -I"C:/Users/zw/Desktop/Lwip/Multicore_1_KIT_TC297_TFT/AppSrc/Lwip/lwip-1.4.1/apps/httpserver_raw" --iso=99 --language=+volatile --fp-model=3 --fp-model=+contract --fp-model=f --fp-model=l --fp-model=n --fp-model=r --fp-model=z -O0 --tradeoff=4 --compact-max-size=200 -g --no-warnings= -o "$@"  "$<"  --core=tc1.6.x --dep-file=$(@:.src=.d) --misrac-version=2012 -N0 -Z0 -Y0 2>&1; sed -i -e '/ctc\\include/d' -e '/Libraries\\iLLD/d' -e '/Libraries\\Infra/d' -e 's/\(.*\)".*\\Multicore_1_KIT_TC297_TFT\(\\.*\)"/\1\.\.\2/g' -e 's/\\/\//g' $(@:.src=.d) && \
	echo $(@:.src=.d) generated
	@echo 'Finished building: $<'
	@echo ' '

Configurations/Debug/%.o: ./Configurations/Debug/%.src
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING Assembler'
	astc -o  "$@" "$<" --list-format=L1 --optimize=gs
	@echo 'Finished building: $<'
	@echo ' '


