DEPENDANCIES = compito.cc liste.cc appuntamento.cc

compito: compito.o liste.o appuntamento.o
	g++ -Wall -o $@ $^

-include dep

dependancies: 
	g++ -MM $(DEPENDANCIES) > dep

run: compito
	./compito agenda.txt

clean: 
	rm -rf compito *.o