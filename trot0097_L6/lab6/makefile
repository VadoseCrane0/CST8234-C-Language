CC= gcc
CC_FLAGS = -g -ansi -pedantic -Wall
FILES = Lab7F1.c Lab7F2.c
OUT_EXE = Lab6

build: $(FILES)
	$(CC) $(CC_FLAGS) -o $(OUT_EXE) $(FILES)
	
clean:
	rm -f *.o core *.exe *~
	
rebuild: clean build