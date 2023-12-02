CC = g++
CFLAGS = -std=c++20 -Wall -pedantic
TARGETS = weird-algorithm

all: $(TARGETS)

clean: ; rm $(TARGETS)

%: %.c; $(CC) $(CFLAGS) -o $@ $^
