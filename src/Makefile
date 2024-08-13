CC = gcc
CFLAGS = -Wall -Wextra
SOURCE = main.c maze.c
HEADER = maze.h utils/result_codes.h utils/utils.h
TARGET = main


.PHONY: all
all:
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE) $(HEADER)

.PHONY: clean
clean:
	rm -rf $(TARGET)
