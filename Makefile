CC = g++
CFLAGS = -Wall -c -g
LDFLAGS = 
SRC = ./src
SOURCES = $(SRC)/list.cc $(SRC)/sorter.cc $(SRC)/main.cc
OBJECTS = $(SOURCES:.cc=.o)
BIN = sorter

all: $(SOURCES) $(BIN)

$(BIN): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cc.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(OBJECTS) $(BIN)
