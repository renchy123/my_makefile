hello.out : func.o main.o
	gcc -o hello.out func.o main.o

func.o : func.c
	gcc -o func.o -c func.c
main.o : main.c
	gcc -o main.o -c main.c

.PHONY : clean rebuild all
#clean :
#	rm -rf *.o hello.out
clean : FORCE
	rm -rf *.o hello.out
FORCE : 
rebuild : clean all

all : hello.out
