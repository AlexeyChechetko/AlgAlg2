all:  main.o knapsack.o solver.o conditions.o

main.o: main.cpp
	g++ -c main.cpp

knapsack.o: knapsack.cpp
	g++ -c knapsack.cpp

solver.o: solver.cpp
	g++ -c solver.cpp

conditions.o: conditions.cpp
	g++ -c conditions.cpp

clean: 
	rm -f *.o
