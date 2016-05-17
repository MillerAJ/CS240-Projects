program3: map.o city.o program.o 
	g++ -std=c++11 -g program.o map.o city.o -o program3

test: map.o city.o test.o 
	g++ -std=c++11 -g test.o map.o city.o -o test

test.o:
	g++ -std=c++11 -g -c test.cpp -o test.o

program.o:
	g++ -std=c++11 -g -c program3.cpp -o program.o

city.o:
	g++ -std=c++11 -g -c City.cpp -o city.o

map.o:
	g++ -std=c++11 -g -c Map.cpp -o map.o

clean:
	rm -f *.o program3




