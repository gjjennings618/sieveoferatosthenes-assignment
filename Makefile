# once you add matrix_sub.cc, you need to modify Makefile to include matrix_sub.cc as a dependency
sieve: sieve.cc
	g++ -std=c++11 -Wall -Wextra -pedantic -o sieve sieve.cc

clean:
	rm sieve
