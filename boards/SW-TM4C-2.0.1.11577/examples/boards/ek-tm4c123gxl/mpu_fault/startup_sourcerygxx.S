//*****************************************************************************
//
// startup_sourcerygxx.S - Startup code for Sourcery CodeBench.
//
// Copyright (c) 2012-2013 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.0.1.11577 of the EK-TM4C123GXL Firmware Package.
//
//*****************************************************************************

    .syntax unified
    .thumb

//*****************************************************************************
//
// Place this code into the .cs3.reset section so that it can be executed prior
// to the startup code in Sourcery CodeBench.
//
//*****************************************************************************
    .section .cs3.reset,"x"

//*****************************************************************************
//
// The reset handler, which overrides the one provided by CS3.
//
//*****************************************************************************
    .globl __cs3_reset
    .thumb_func
__cs3_reset:
    //
    // Enable the floating-point unit.  This must be done here to handle the
    // case where main() uses floating-point and the function prologue saves
    // floating-point registers (which will fault if floating-point is not
    // enabled).  Any configuration of the floating-point unit using DriverLib
    // APIs must be done here prior to the floating-point unit being enabled.
    //
    // Note that this does not use DriverLib since it might not be included in
    // this project.
    //
    movw    r0, #0xed88
    movt    r0, #0xe000
    ldr     r1, [r0]
    orr     r1, #0x00f00000
    str     r1, [r0]

    //
    // Branch to the normal CS3 startup code.
    //
    .extern __cs3_reset_ekc_lm4f232
    ldr     r0, =__cs3_reset_ekc_lm4f232
    bx      r0

    //
    // Place the literal pool here.
    //
    .ltorg

//*****************************************************************************
//
// Place this code into the .cs3.interrupt_vector section so that it can
// replace the vector table provided by Sourcery CodeBench.
//
//*****************************************************************************
    .section .cs3.interrupt_vector,"x"

    //
    // The vector table.
    //
    .globl __cs3_interrupt_vector_stellaris_blizzard
__cs3_interrupt_vector_stellaris_blizzard:
    .extern __cs3_stack
    .word   __cs3_stack
    .extern __cs3_reset
    .word   __cs3_reset
    .extern __cs3_isr_nmi
    .word   __cs3_isr_nmi
    .extern __cs3_isr_hard_fault
    .word   __cs3_isr_hard_fault
    .extern __cs3_isr_mpu_fault
    .word   __cs3_isr_mpu_fault
    .extern __cs3_isr_bus_fault
    .word   __cs3_isr_bus_fault
    .extern __cs3_isr_usage_fault
    .word   __cs3_isr_usage_fault
    .word   0
    .word   0
    .word   0
    .word   0
    .extern __cs3_isr_svcall
    .word   __cs3_isr_svcall
    .extern __cs3_isr_debug
    .word   __cs3_isr_debug
    .word   0
    .extern __cs3_isr_pendsv
    .word   __cs3_isr_pendsv
    .extern __cs3_isr_systick
    .word   __cs3_isr_systick
    .extern __cs3_isr_gpio_a
    .word   __cs3_isr_gpio_a
    .extern __cs3_isr_gpio_b
    .word   __cs3_isr_gpio_b
    .extern __cs3_isr_gpio_c
    .word   __cs3_isr_gpio_c
    .extern __cs3_isr_gpio_d
    .word   __cs3_isr_gpio_d
    .extern __cs3_isr_gpio_e
    .word   __cs3_isr_gpio_e
    .extern __cs3_isr_uart0
    .word   __cs3_isr_uart0
    .extern __cs3_isr_uart1
    .word   __cs3_isr_uart1
    .extern __cs3_isr_ssi0
    .word   __cs3_isr_ssi0
    .extern __cs3_isr_i2c0
    .word   __cs3_isr_i2c0
    .extern __cs3_isr_pwm_fault
    .word   __cs3_isr_pwm_fault
    .extern __cs3_isr_pwm0
    .word   __cs3_isr_pwm0
    .extern __cs3_isr_pwm1
    .word   __cs3_isr_pwm1
    .extern __cs3_isr_pwm2
    .word   __cs3_isr_pwm2
    .extern __cs3_isr_qei0
    .word   __cs3_isr_qei0
    .extern __cs3_isr_adc0
    .word   __cs3_isr_adc0
    .extern __cs3_isr_adc1
    .word   __cs3_isr_adc1
    .extern __cs3_isr_adc2
    .word   __cs3_isr_adc2
    .extern __cs3_isr_adc3
    .word   __cs3_isr_adc3
    .extern __cs3_isr_watchdog
    .word   __cs3_isr_watchdog
    .extern __cs3_isr_timer0a
    .word   __cs3_isr_timer0a
    .extern __cs3_isr_timer0b
    .word   __cs3_isr_timer0b
    .extern __cs3_isr_timer1a
    .word   __cs3_isr_timer1a
    .extern __cs3_isr_timer1b
    .word   __cs3_isr_timer1b
    .extern __cs3_isr_timer2a
    .word   __cs3_isr_timer2a
    .extern __cs3_isr_timer2b
    .word   __cs3_isr_timer2b
    .extern __cs3_isr_comp0
    .word   __cs3_isr_comp0
    .extern __cs3_isr_comp1
    .word   __cs3_isr_comp1
    .extern __cs3_isr_comp2
    .word   __cs3_isr_comp2
    .extern __cs3_isr_sysctl
    .word   __cs3_isr_sysctl
    .extern __cs3_isr_flashctl
    .word   __cs3_isr_flashctl
    .extern __cs3_isr_gpio_f
    .word   __cs3_isr_gpio_f
    .extern __cs3_isr_gpio_g
    .word   __cs3_isr_gpio_g
    .extern __cs3_isr_gpio_h
    .word   __cs3_isr_gpio_h
    .extern __cs3_isr_uart2
    .word   __cs3_isr_uart2
    .extern __cs3_isr_ssi1
    .word   __cs3_isr_ssi1
    .extern __cs3_isr_timer3a
    .word   __cs3_isr_timer3a
    .extern __cs3_isr_timer3b
    .word   __cs3_isr_timer3b
    .extern __cs3_isr_i2c1
    .word   __cs3_isr_i2c1
    .extern __cs3_isr_qei1
    .word   __cs3_isr_qei1
    .extern __cs3_isr_can0
    .word   __cs3_isr_can0
    .extern __cs3_isr_can1
    .word   __cs3_isr_can1
    .extern __cs3_isr_can2
    .word   __cs3_isr_can2
    .word   0
    .extern __cs3_isr_hibernate
    .word   __cs3_isr_hibernate
    .extern __cs3_isr_usb0
    .word   __cs3_isr_usb0
    .extern __cs3_isr_pwm3
    .word   __cs3_isr_pwm3
    .extern __cs3_isr_udma
    .word   __cs3_isr_udma
    .extern __cs3_isr_udmaerr
    .word   __cs3_isr_udmaerr
    .extern __cs3_isr_adc1ss0
    .word   __cs3_isr_adc1ss0
    .extern __cs3_isr_adc1ss1
    .word   __cs3_isr_adc1ss1
    .extern __cs3_isr_adc1ss2
    .word   __cs3_isr_adc1ss2
    .extern __cs3_isr_adc1ss3
    .word   __cs3_isr_adc1ss3
    .word   0
    .word   0
    .extern __cs3_isr_gpio_j
    .word   __cs3_isr_gpio_j
    .extern __cs3_isr_GPIOK
    .word   __cs3_isr_GPIOK
    .extern __cs3_isr_GPIOL
    .word   __cs3_isr_GPIOL
    .extern __cs3_isr_SSI2
    .word   __cs3_isr_SSI2
    .extern __cs3_isr_SSI3
    .word   __cs3_isr_SSI3
    .extern __cs3_isr_UART3
    .word   __cs3_isr_UART3
    .extern __cs3_isr_UART4
    .word   __cs3_isr_UART4
    .extern __cs3_isr_UART5
    .word   __cs3_isr_UART5
    .extern __cs3_isr_UART6
    .word   __cs3_isr_UART6
    .extern __cs3_isr_UART7
    .word   __cs3_isr_UART7
    .word   0
    .word   0
    .word   0
    .word   0
    .extern __cs3_isr_I2C2
    .word   __cs3_isr_I2C2
    .extern __cs3_isr_I2C3
    .word   __cs3_isr_I2C3
    .extern __cs3_isr_TIMER4A
    .word   __cs3_isr_TIMER4A
    .extern __cs3_isr_TIMER4B
    .word   __cs3_isr_TIMER4B
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .word   0
    .extern __cs3_isr_TIMER5A
    .word   __cs3_isr_TIMER5A
    .extern __cs3_isr_TIMER1B
    .word   __cs3_isr_TIMER1B
    .extern __cs3_isr_WTIMER0A
    .word   __cs3_isr_WTIMER0A
    .extern __cs3_isr_WTIMER0B
    .word   __cs3_isr_WTIMER0B
    .extern __cs3_isr_WTIMER1A
    .word   __cs3_isr_WTIMER1A
    .extern __cs3_isr_WTIMER1B
    .word   __cs3_isr_WTIMER1B
    .extern __cs3_isr_WTIMER2A
    .word   __cs3_isr_WTIMER2A
    .extern __cs3_isr_WTIMER2B
    .word   __cs3_isr_WTIMER2B
    .extern __cs3_isr_WTIMER3A
    .word   __cs3_isr_WTIMER3A
    .extern __cs3_isr_WTIMER3B
    .word   __cs3_isr_WTIMER3B
    .extern __cs3_isr_WTIMER4A
    .word   __cs3_isr_WTIMER4A
    .extern __cs3_isr_WTIMER4B
    .word   __cs3_isr_WTIMER4B
    .extern __cs3_isr_WTIMER5A
    .word   __cs3_isr_WTIMER5A
    .extern __cs3_isr_WTIMER5B
    .word   __cs3_isr_WTIMER5B
    .extern __cs3_isr_SYSEXCP
    .word   __cs3_isr_SYSEXCP
    .word   0
    .word   0
    .extern __cs3_isr_I2C4
    .word   __cs3_isr_I2C4
    .extern __cs3_isr_I2C5
    .word   __cs3_isr_I2C5
    .extern __cs3_isr_GPIOM
    .word   __cs3_isr_GPIOM
    .extern __cs3_isr_GPION
    .word   __cs3_isr_GPION
    .word   0
    .word   0
    .word   0
    .extern __cs3_isr_qpiop0
    .word   __cs3_isr_qpiop0
    .extern __cs3_isr_qpiop1
    .word   __cs3_isr_qpiop1
    .extern __cs3_isr_qpiop2
    .word   __cs3_isr_qpiop2
    .extern __cs3_isr_qpiop3
    .word   __cs3_isr_qpiop3
    .extern __cs3_isr_qpiop4
    .word   __cs3_isr_qpiop4
    .extern __cs3_isr_qpiop5
    .word   __cs3_isr_qpiop5
    .extern __cs3_isr_qpiop6
    .word   __cs3_isr_qpiop6
    .extern __cs3_isr_qpiop7
    .word   __cs3_isr_qpiop7
    .extern __cs3_isr_qpioq0
    .word   __cs3_isr_qpioq0
    .extern __cs3_isr_qpioq1
    .word   __cs3_isr_qpioq1
    .extern __cs3_isr_qpioq2
    .word   __cs3_isr_qpioq2
    .extern __cs3_isr_qpioq3
    .word   __cs3_isr_qpioq3
    .extern __cs3_isr_qpioq4
    .word   __cs3_isr_qpioq4
    .extern __cs3_isr_qpioq5
    .word   __cs3_isr_qpioq5
    .extern __cs3_isr_qpioq6
    .word   __cs3_isr_qpioq6
    .extern __cs3_isr_qpioq7
    .word   __cs3_isr_qpioq7
    .word   0
    .word   0
    .extern __cs3_isr_pwm1_0
    .word   __cs3_isr_pwm1_0
    .extern __cs3_isr_pwm1_1
    .word   __cs3_isr_pwm1_1
    .extern __cs3_isr_pwm1_2
    .word   __cs3_isr_pwm1_2
    .extern __cs3_isr_pwm1_3
    .word   __cs3_isr_pwm1_3
    .extern __cs3_isr_pwm1_fault
    .word   __cs3_isr_pwm1_fault

    //
    // The end of the file.
    //
    .end
