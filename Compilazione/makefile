
DEPENDANCIES = fun-app.cc liste.cc main.cc tipo.cc

main: main.o fun-app.o liste.o tipo.o
	g++ -Wall -o $@ $^

-include dep

dependancies: 
	g++ -MM $(DEPENDANCIES) > dep

clean: 
	rm -rf main *.o