lab7: lab7.o tree.o
	g++ lab7.o tree.o -o lab7

lab6: lab6.o tree.o 
	g++ lab6.o tree.o  -o lab6

test: tree.o test.o
	g++ test.o tree.o -o test

lab7.o:
	g++ -c lab7.cpp -o lab7.o

lab6.o:
	g++ -c lab6.cpp -o lab6.o

tree.o:
	g++ -c BSTree.cpp  -o tree.o

test.o:
	g++ -c aTest.cpp -o test.o

clean:
	rm -f *.o lab6

