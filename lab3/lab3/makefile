

all: lab3

lab3: lab3.o user.o moviechart.o
	g++ lab3.o user.o moviechart.o  -o lab3

lab3.o:
	g++ -g -c lab3.cpp -o lab3.o

moviechart.o:
	g++ -g -c MovieChart.cpp -o moviechart.o

user.o:
	g++ -g -c User.cpp -o user.o

clean:
	rm -f *.o lab3

run: clean all
	./lab3
