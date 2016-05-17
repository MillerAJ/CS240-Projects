
Program1: main.o user.o moviechart.o linkList.o
	g++ main.o user.o moviechart.o linkList.o -o Program1

main.o:
	g++ -g -c main.cpp -o main.o

moviechart.o:
	g++ -g -c MovieChart.cpp -o moviechart.o

user.o:
	g++ -g -c User.cpp -o user.o

linkList.o:
	g++ -g -c LinkList.cpp -o linkList.o

test.o: 
	g++ -g -c test.cpp -o test.o

test: test.o user.o linkList.o moviechart.o
	g++ test.o user.o linkList.o moviechart.o -o test

clean:
	rm -f *.o lab3

