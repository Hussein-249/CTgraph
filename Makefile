CC := gcc
# SRCS := src/main.c src/canvas.c src/barchart.c
# OBJS := $(SRCS:.c=.o)
OPTIONS = -Wall -g
INCLUDES = -Iheader
LIBS = -lncurses

CTgraph: main.o canvas.o
	$(CC) $(OPTIONS) $(INCLUDES) -o CTgraph main.o canvas.o $(LIBS)

main.o: src/main.c headers/canvas.h
	$(CC) $(OPTIONS) $(INCLUDES) -c src/main.c

canvas.o: src/canvas.c headers/canvas.h
	$(CC) $(OPTIONS) $(INCLUDES) -c src/canvas.c $(LIBS)

.PHONY:
	clean

clean:
	rm -f *.o CTgraph
