default:automat

automat.o:automat.c
	gcc -c automat.c -o automat.o

automat:automat.o
	gcc automat.o -o automat 

clean:
	-rm -f automat.o
	-rm -f automat 
