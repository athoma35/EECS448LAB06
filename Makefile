#	Author: John Gibbons
#	Date: 2016.10.26

prog: main.o Testor.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o Testor.o -o prog

main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp

Testor.o: Testor.cpp Testor.h LinkedListOfInts.h
	g++ -g -Wall -std=c++11 -c Testor.cpp

clean:
	rm main.o Testor.o prog
