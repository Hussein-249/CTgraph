OPTIONS = -Wall -g
INCLUDES = -Iheader
LIBS = -lncurses

CTgraph: main.o canvas.o
	gcc $(OPTIONS) $(INCLUDES) -o CTgraph main.o canvas.o $(LIBS)

main.o: src/main.c headers/canvas.h
	gcc $(OPTIONS) $(INCLUDES) -c src/main.c

canvas.o: src/canvas.c headers/canvas.h
		gcc $(OPTIONS) $(INCLUDES) -c src/canvas.c $(LIBS)

clean:
	rm -f *.o CTgraph
