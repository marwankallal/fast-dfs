CC=gcc
LDFLAGS=-lpthread
BINARY=fast-dfs
CFLAGS=-g -Wall -Werror

all:
	$(CC) dfs.c dfs.h $(CFLAGS) -o $(BINARY) $(LDFLAGS)

library:
	$(CC) dfs.c dfs.h -c -DLIBRARY $(CFLAGS) $(LDFLAGS)

clean:
	rm -f *.gch $(BINARY) *.o
