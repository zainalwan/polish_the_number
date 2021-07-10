CC = g++
OBJECT_FILES = main.o Polisher.o Console.o
BINARY_DIRECTORY = ../bin
BINARY_NAME = app

all: help

help:
	@echo "Usage: make <arguments>"
	@echo ""
	@echo "List of available arguments:"
	@echo "    help                     Display this help message"
	@echo "    install                  Compile to ../bin/app executeable"
	@echo "    clean                    Clean the object files"
	@echo "    uninstall                Delete the ../bin/app executeable"

install: ${OBJECT_FILES}
	mkdir -p ${BINARY_DIRECTORY}
	g++ -o ${BINARY_DIRECTORY}/${BINARY_NAME} ${OBJECT_FILES}

main.o: main.cpp
	${CC} -c -o main.o main.cpp

Polisher.o: Polisher.cpp ../headers/Polisher.h ../templates/Polisher.tpp
	${CC} -c -o Polisher.o Polisher.cpp

Console.o: Console.cpp ../headers/Console.h
	${CC} -c -o Console.o Console.cpp

clean:
	rm -rf *.o

uninstall:
	rm -rf ${BINARY_DIRECTORY}/${BINARY_NAME}