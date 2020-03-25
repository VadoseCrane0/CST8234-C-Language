CC= gcc
CC_FLAGS = -g -ansi -pedantic -Wall
FILES = assign2.c assign2F2.c
OUT_EXE = assign2

build: $(FILES)
	$(CC) $(CC_FLAGS) -o $(OUT_EXE) $(FILES)
	
clean:
	rm -f *.o core *.exe *~
	
rebuild: clean build