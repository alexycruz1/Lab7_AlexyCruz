com: racional.o main.o
	g++ racional.o main.o -o com

main.o: main.cpp racional.h
	g++ -c main.cpp

racional.o: racional.cpp racional.h
	g++ -c racional.cpp
