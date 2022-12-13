main: main.o island.o 
	gcc main.o island.o -o island

main.o: main.c island.h
	gcc -c main.c 	

encrypt.o: island.c island.h
	gcc -c island.c 	

	