PROGRAM = 9cc
OBJS = 9cc.o tokenize.o error.o parse.o gen.o
SRCS = $(OBJS:%.o=%.c)
CC = gcc
CFLAGS=-std=c11 -g -static
LDFLAGS=

$(PROGRAM):$(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(PROGRAM) $(OBJS) $(LDLIBS)

test: 9cc
		sh ./test.sh

clean:
		rm -f 9cc *.o *~ tmp*

.PHONY: test clean
