CC = g++
CFLAGS = -Wall -g -Iinclude

all: compito

compito: compito.cc tipo.cc liste.cc
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f compito tipo.o liste.o