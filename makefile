build: main.o string.o
	gcc main.o string.o
	#
	./a.out
	#
main.o: main.c
	gcc -c main.c 

string.o: string.c
	gcc -c string.c

clear:
	rm main.o string.o ./a.out

	