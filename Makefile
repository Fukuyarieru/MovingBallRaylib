
CFLAGS = -Wall
LIBS = -lraylib -lm -lpthread -ldl -lGL -lrt -lX11

all: main

main: main.c
	gcc $(CFLAGS) -o main main.c main.h $(LIBS)
	./main

clean:
	rm -f main
