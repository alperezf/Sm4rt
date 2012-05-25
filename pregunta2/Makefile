CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=voting.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=problema2

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

