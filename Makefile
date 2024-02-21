CFLAGS = -Wall -Wextra -pedantic -std=c99

crunch: ./src/crunch.c
	@rm -f crunch
	$(CC) ./src/crunch.c -o crunch $(CFLAGS) -lncurses