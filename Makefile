.POSIX:

all: clean main

main:
	$(CXX) disc.cpp stack.cpp main.cpp -o main

test: clean
	$(CXX) disc.cpp stack.cpp test.cpp -o test
	./test

clean:
	rm -rf main test
