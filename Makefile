CFLAGS = -Wall -Wextra -pedantic -std=c99

crunch: ./src/crunch.c
	$(CC) ./src/crunch.c -o crunch $(CFLAGS) -lncurses