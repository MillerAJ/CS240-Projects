COMP = clang++
FLAGS = -g -std=c++11

lab1: main.o 
	$(COMP) $(FLAGS) main.o -o lab1

main.o: main.cpp Train.h Cart.h
	$(COMP) $(FLAGS) -c main.cpp -o main.o

clean:
	rm -f *.o lab1

