all:  main.o knapsack.o solver.o conditions.o
	g++ -o knapsack main.o knapsack.o solver.o conditions.o
main.o: main.cpp knapsack.h solver.h conditions.h 
	g++ -c main.cpp

knapsack.o: knapsack.cpp knapsack.h
	g++ -c knapsack.cpp

solver.o: solver.cpp solver.h
	g++ -c solver.cpp

conditions.o: conditions.cpp condition.h
	g++ -c conditions.cpp

clean: cleanobj cleanmain 

cleanobj:
	rm -f *.o

cleanmain:
	rm main

.PHONY: clean cleanobj cleanmain
