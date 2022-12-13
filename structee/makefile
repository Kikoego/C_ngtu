main: main.o fish.o 
	gcc main.o fish.o -o fish

main.o: main.c fish.h
	gcc -c main.c 	

encrypt.o: fish.c fish.h
	gcc -c fish.c

	