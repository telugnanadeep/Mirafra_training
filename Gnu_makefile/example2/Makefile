all: bin/main
	echo "Build done"
bin/main:main.o scr/add/add.o scr/sub/sub.o
	gcc main.o scr/add/add.o scr/sub/sub.o -o bin/main
main.o:main.c
	gcc -c main.c
scr/add/add.o : 
	make -C scr/add
scr/sub/sub.o :
	make -C scr/sub
clean:
	rm *.o bin/main
	rm *.o 
	make -C add clean
	make -C sub clean
install:
	sudo cp bin/main /usr/bin
