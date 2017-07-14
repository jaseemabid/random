# Learn assembly from first principles

The goal is to write assembly for modern x86 machines, with no concern
https://en.wikipedia.org/wiki/X86_assembly_language#Syntaxfor backward
compatibility. Avoid emulators and use the native hardware as much as possible.
I approach the 3 popular formats here, nasm, at&t and Intel. This is a kitchen
sink of everything I find valuable.

### Reading list

1. [Wikipedia][wiki] is a great place to start.

1. Simple nasm [hello world][hello] tutorial and a much more
   detailed [language reference][nasm-ref]

The tutorial aims 32 bit arch, but the [makefile](nasm/Makefile) fixes it.

1. The [x86 assembly guide  x86 Assembly Guide][guide] by  U. of Virginia.

The guide is written for the MASM assembler (Intel syntax). Contains a quick
introduction to the common instructions.

1. [X86 Opcode and Instruction Reference][ref]

1. [x86 cheat sheet][cheat], if you are into that sort of thing.


[cheat]: https://cs.brown.edu/courses/cs033/docs/guides/x64_cheatsheet.pdf
[guide]: https://www.cs.virginia.edu/~evans/cs216/guides/x86.html
[hello]: http://asm.sourceforge.net/intro/hello.html
[nasm-ref]: http://www.nasm.us/doc/nasmdoc3.html
[ref]: http://ref.x86asm.net/coder64.html
[wiki]: https://en.wikipedia.org/wiki/X86_assembly_language
