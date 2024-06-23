CXXFLAGS=-Wall

all: a.out

a.out: main.o tree.o tipo.o 
	g++ main.o tree.o tipo.o -o a.out 

main.o: main.cc
	g++ -c main.cc -o main.o

tree.o: tree.cc
	g++ -c tree.cc -o tree.o

tipo.o: tipo.cc
	g++ -c tipo.cc -o tipo.o

clean:
	rm -f *.o

.PHONY: all clean

run: all
	make clean
	clear
	./a.out
