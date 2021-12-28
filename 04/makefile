TARGET := hello-world.out
CC := g++

$(TARGET): func.o main.o
	gcc -o hello.out func.o main.o

func.o : func.c
	$(CC) -o func.o -c func.c
main.o : main.c
	$(CC) -o main.o -c main.c

.PHONY : clean rebuild all
#clean :
#	rm -rf *.o hello.out
clean : FORCE
	rm -rf *.o $(TARGET) 
FORCE : 
rebuild : clean all

all : $(TARGET)
