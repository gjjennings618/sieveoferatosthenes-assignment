/* 	Garrett Jennings | ZID: Z1927185
	Assignment 02 | Matrix Multiply
	CS340 - 1
	
	I certify that this is my own work and where appropriate an extension 
	of the starter code provided for the assignment.
*/

#include <iostream>
#include <set>
#include <iomanip>

using std::set;

const int ITEM_W = 5;
const int NO_ITEMS = 16;

void sieve(set<int>& s, int n)
{
	for (int i: s){
		for (int j = i * i; j <= n; j += i){
			s.erase(j);
		}
	}
}

void print_primes(const set<int>& s)
{
	std::cout << "\n";
	int i = 1;
	for (int elem: s){
		std::cout << std::right << std::setw(ITEM_W) << elem;
		if (i%NO_ITEMS == 0) std::cout << "\n";
		i++;
	}
	std::cout << "\n";
}

int
main()
{
	set<int> s;
	std::cout << "Upper limit for the set of primes: ";
	int uplim;
	std::cin >> uplim;

	std::cout << uplim << "\n";
	
	for (int i = 2; i <= uplim; i++){
		s.insert(i);
	}

	sieve(s, uplim);
	print_primes(s);

	return 0;
}
