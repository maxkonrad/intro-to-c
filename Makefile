default: all
CC = gcc
CFLAGS =

bin_dir:
	mkdir -p bin
	mkdir -p bin/1-Beginner_Projects bin/2-Intermediate_Projects bin/3-Further_Projects

all: clean bin_dir beginner_projects intermediate_projects furter_projects

beginner_projects: ascii_printer chess_board even_odd_checker fibonacci furkanselek_fibonacci guess_the_number
intermediate_projects: one two three four five six
furter_projects: binary_search single_loop_left_pyramid time_example
clean:
	@rm -rf bin

ascii_printer:
	$(CC) $(CFLAGS) -o bin/1-Beginner_Projects/ascii_printer 1-Beginner_Projects/ascii_printer.c
chess_board:
	$(CC) $(CFLAGS) -o bin/1-Beginner_Projects/chess_board 1-Beginner_Projects/chess_board.c
even_odd_checker:
	$(CC) $(CFLAGS) -o bin/1-Beginner_Projects/even_odd_checker 1-Beginner_Projects/even_odd_checker.c
fibonacci:
	$(CC) -o bin/1-Beginner_Projects/fibonacci 1-Beginner_Projects/fibonacci.c
furkanselek_fibonacci:
	$(CC) $(CFLAGS) -o bin/1-Beginner_Projects/furkanselek_fibonacci 1-Beginner_Projects/furkanselek_fibonacci.c
guess_the_number:
	$(CC) $(CFLAGS) -o bin/1-Beginner_Projects/guess_the_number 1-Beginner_Projects/guess_the_number.c

one:
	$(CC) $(CFLAGS) -o bin/2-Intermediate_Projects/one 2-Intermediate_Projects/1.c
two:
	$(CC) $(CFLAGS) -o bin/2-Intermediate_Projects/two 2-Intermediate_Projects/2.c
three:
	$(CC) $(CFLAGS) -o bin/2-Intermediate_Projects/three 2-Intermediate_Projects/3.c
four:
	$(CC) $(CFLAGS) -o bin/2-Intermediate_Projects/four 2-Intermediate_Projects/4.c
five:
	$(CC) $(CFLAGS) -o bin/2-Intermediate_Projects/five 2-Intermediate_Projects/5.c
six:
	$(CC) $(CFLAGS) -o bin/2-Intermediate_Projects/six 2-Intermediate_Projects/6.c

binary_search:
	$(CC) $(CFLAGS) -o bin/3-Further_Projects/binary_search 3-Further_Projects/binary_search.c
single_loop_left_pyramid:
	$(CC) $(CFLAGS) -o bin/3-Further_Projects/single_loop_left_pyramid 3-Further_Projects/single_loop_left_pyramid.c
time_example:
	$(CC) $(CFLAGS) -o bin/3-Further_Projects/time_example 3-Further_Projects/time_example.c