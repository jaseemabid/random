# Learn assembly from first principles

The goal is to write assembly for modern x86 machines, with no concern for
backward compatibility. Avoid emulators and use the native hardware as much as
possible. I approach the 3 popular formats here, nasm, at&t and Intel. This is a
kitchen sink of everything I find valuable.

### Reading list

1. [Wikipedia][wiki] is a great place to start.

1. Simple nasm [hello world][hello] tutorial and a much more
   detailed [language reference][nasm-ref]. The tutorial aims 32 bit arch, but
   the [makefile](nasm/Makefile) fixes it.

1. The [x86 assembly guide x86 Assembly Guide][guide] by U. of Virginia. The
   guide is written for the MASM assembler (Intel syntax). Contains a quick
   introduction to the common instructions.

1. The [x86 calling convention][cc] explains how functions are called.

1. [X86 Opcode and Instruction Reference][ref]. A big table explaining all the
   op codes and mnemonics.

1. [x86 cheat sheet][cheat], if you are into that sort of thing.

1. [Compiler explorer][explorer] can show the assembly output from various
   compilers conveniently in your browser.

1. Closest thing I could find for [x86 man pages][man]. The downloaded archive
   contains an HTML page per instruction, which can be really handy.

[cc]: https://en.wikipedia.org/wiki/Calling_convention#x86
[cheat]: https://cs.brown.edu/courses/cs033/docs/guides/x64_cheatsheet.pdf
[explorer]: https://gcc.godbolt.org
[guide]: https://www.cs.virginia.edu/~evans/cs216/guides/x86.html
[hello]: http://asm.sourceforge.net/intro/hello.html
[man]: https://github.com/zneak/x86doc
[nasm-ref]: http://www.nasm.us/doc/nasmdoc3.html
[ref]: http://ref.x86asm.net/coder64.html
[wiki]: https://en.wikipedia.org/wiki/X86_assembly_language
