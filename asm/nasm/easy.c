#include <stdio.h>

int main() {

  unsigned cycles;
  asm volatile(
    ".intel_syntax noprefix\n\t" \
    "cpuid\n\t" \
    "rdtsc\n\t" \
    "mov r10, rax\n\t" \

    "nop\n\t" \

    "cpuid\n\t" \
    "rdtsc\n\t" \
    "sub rax, r10\n\t" \
        : "=a" (cycles) \
  : \
    :  "rbx", "rcx", "rdx", "r10"         \
               );

  printf("%d\n", cycles);

  return 0;
}
