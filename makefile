all: main.o conditions.o
	g++ -o knapsack main.o conditions.o
main.o: main.cpp conditions.h 
	g++ -c main.cpp

conditions.o: conditions.cpp conditions.h
	g++ -c conditions.cpp

clean: cleanobj cleanmain 

cleanobj:
	rm -f *.o

cleanmain:
	rm knapsack

.PHONY: clean cleanobj cleanmain
