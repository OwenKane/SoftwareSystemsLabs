CC = gcc
objects = main.o areaOfRectangle.o areaOfSquare.o areaOfCircle.o areaOfTriangle.o
headers = areaOfRectangle.h areaOfSquare.h areaOfCircle.h areaOfTriangle.h

myprog : $(objects)
	$(CC) -o areaProg $(objects) -lm

main.o : main.c $(headers)
	$(CC) -c main.c

areaOfRectangle.o : areaOfRectangle.c
	$(CC) -c areaOfRectangle.c

areaOfSquare.o : areaOfSquare.c areaOfRectangle.h
	$(CC) -c areaOfSquare.c

areaOfCircle.o : areaOfCircle.c
	$(CC) -c areaOfCircle.c

areaOfTriangle.o : areaOfTriangle.c
	$(CC) -c areaOfTriangle.c -lm

clean:
	rm areaProg $(objects)


