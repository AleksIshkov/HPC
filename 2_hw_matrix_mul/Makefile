CFLAGS=-g -O3 -c

all: 1.exe 

1.exe: tools.o matrix_mul.o vector_mul.o
	ar rs MatrMul.a tools.o matrix_mul.o vector_mul.o
	gcc -I . $(CFLAGS) main.c
	gcc -static -o 1.exe main.o MatrMul.a

tools.o: tools.c prototype.h
	gcc $(CFLAGS)  tools.c

matrix_mul.o: matrix_mul.c prototype.h
	gcc $(CFLAGS)  matrix_mul.c

vector_mul.o: vector_mul.c prototype.h
	gcc $(CFLAGS)  vector_mul.c

clean:
	rm -rf *.o 

docker:
	docker build -f Dockerfile -t 2_hw .