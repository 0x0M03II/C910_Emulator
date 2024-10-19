# Emulator

I decided to just write an emulator for the C910 Processor to support [GREENOS](https://github.com/0x0M03II/GreenOS).  I'm anticipating a delay of
2 weeks to complete this emulator ... I have a job and this is a hobby!

# Additions to Unicorn
Add the following to the RISCV include file, riscv.h.  This will allow the registers.h file to properly load.

The following macros are used to detect 64 bit and load floating-point registers

```
#ifndef __riscv
#define __riscv
#endif

#ifndef __riscv_xlen
#define __riscv_xlen
#endif
```

# Make sure you specify Lib and Include when compiling

```
gcc -I./include -I./src/include -L./lib -lunicorn src/main.c src/cpu.c src/isa.c -o emulator
export LD_LIBRARY_PATH=./lib:$LD_LIBRARY_PATH

# optional alternative using unicorn pkgconfig

export PKG_CONFIG_PATH=./lib/pkgconfig:$PKG_CONFIG_PATH
```

It's best to create a Makefile