all:
	gcc main.c -o speed.exe

main.o: main.c
	gcc -c main.c

runtest:
	gcc main.c -o speed.exe
	./testmain.tcl ./speed.exe
