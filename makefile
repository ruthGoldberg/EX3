CC = gcc
FLAGS = -Wall -g

all: isort txtfind

isort: isort.o mainA.o 
	$(CC)  $(FLAGS) -o isort isort.o mainA.o
	
txtfind: txtfind.o mainB.o
	$(CC)  $(FLAGS) -o txtfind txtfind.o mainB.o

txtfind.o: txtfind.c EX3.h
	$(CC) $(FLAGS) -c txtfind.c

isort.o: isort.c EX3.h
	$(CC) $(FLAGS) -c isort.c

mainA.o: mainA.c EX3.h
	$(CC) $(FLAGS) -c mainA.c

mainB.o: mainB.c EX3.h
	$(CC) $(FLAGS) -c mainB.c

	
.PHONY: clean all

clean: 
	rm -f *.o txtfind isort