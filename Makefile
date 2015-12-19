CC=gcc
LDFLAGS=-lpthread
BINARY=fast-dfs
CFLAGS=-g -o $(BINARY)

all:
	$(CC) dfs.c dfs.h $(CFLAGS) $(LDFLAGS)

clean:
	rm -f *.gch $(BINARY)
