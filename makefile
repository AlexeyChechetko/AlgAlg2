all: main.o conditions.o knapsack.o solver.o
	g++ -o knapsack main.o conditions.o knapsack.o solver.o
main.o: main.cpp conditions.h knapsack.h solver.h
	g++ -c main.cpp

conditions.o: conditions.cpp conditions.h
	g++ -c conditions.cpp

knapsack.o: knapsack.cpp knapsack.h
	g++ -c knapsack.cpp

solver.o: solver.cpp solver.h
	g++ -c solver.cpp

clean: cleanobj cleanmain 

cleanobj:
	rm -f *.o

cleanmain:
	rm knapsack

.PHONY: clean cleanobj cleanmain
