sample: sample.o
	ld -s -o sample sample.o

sample.o: sample.s
	nasm -f elf64 sample.s

clean:
	rm -f sample sample.o
