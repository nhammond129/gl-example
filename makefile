CC=g++
LIBS=freeglut gl
CFLAGS=$(shell pkg-config --cflags --libs $(LIBS))

a.out: main.cpp
	$(CC) $(CFLAGS) main.cpp
