CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=interpreter.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=problema3

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

