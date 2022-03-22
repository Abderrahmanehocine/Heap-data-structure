CC=g++

CFLAGS=-c 

all: main

main: main.o insert/insert.o print/print.cpp check/check.cpp delete/freeMemory.cpp
	$(CC) main.o insert/insert.o print/print.cpp check/check.cpp delete/freeMemory.cpp -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

insert/insertNode.o: insert/insert.cpp
	$(CC) $(CFLAGS) insert/insert.cpp

print/printData.o: print/print.o
	$(CC) $(CFLAGS) print/print.cpp

delete/deleteNode.o: check/check.cpp
	$(CC) $(CFLAGS) check/check.cpp

delete/freeMemory.o: delete/freeMemory.cpp
	$(CC) $(CFLAGS) delete/freeMemory.cpp
