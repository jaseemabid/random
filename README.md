# Learn assembly from first principles

The goal is to write assembly for modern x86 machines, with no concern for
backward compatibility. Avoid emulators and use the native hardware as much as
possible. I approach the 3 popular formats here, nasm, at&t and Intel. This is a
kitchen sink of everything I find valuable.

### Reading list

1. Simple [hello world][hello] tutorial

The tutorial aims 32 bit arch, but the [makefile](nasm/Makefile) fixes it.

2. The [x86 assembly guide  x86 Assembly Guide][guide] by  U. of Virginia.

The guide is written for the MASM assembler (Intel syntax). Contains a quick
introduction to the common instructions.

3. [X86 Opcode and Instruction Reference][ref]

4. [x86 cheat sheet][cheat], if you are into that sort of thing.



[cheat]: https://cs.brown.edu/courses/cs033/docs/guides/x64_cheatsheet.pdf
[guide]: https://www.cs.virginia.edu/~evans/cs216/guides/x86.html
[hello]: http://asm.sourceforge.net/intro/hello.html
[ref]: http://ref.x86asm.net/coder64.html
