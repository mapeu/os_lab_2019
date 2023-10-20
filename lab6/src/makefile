CC=gcc

all: client server
	
client: client.c fndFactorials
	$(CC) client.c fndFactorial.o -o client.out

server: server.c fndFactorials
	$(CC) server.c fndFactorial.o -lpthread  -o server.out

fndFactorials: fndFactorial.c fndFactorial.h
	$(CC) -c fndFactorial.c -o fndFactorial.o

clear:
	rm *.o *.out