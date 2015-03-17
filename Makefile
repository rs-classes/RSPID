#this will command all the files
NAME = vprintf
CC = gcc
all:
	$(CC) main.cpp RSIO.cpp -o $(NAME)
clean:
	rm -rf $(NAME)
