#include <stdio.h>
#include <iostream>
using namespace std;

/* bit clear:   1st arg: int, 2nd arg: bit position to clear */ #define CLEARBIT(a, pos) (a &= ~(1 << pos) )

int main() {
	/* 'z': decimal value 122 (=01111010) */
	char a = 'a';
	/* clearing the 5th bit */
	char aOut = CLEARBIT(a, 5);

	/* aOut = 'Z': decimal value 90 (=01011010) */
	cout << "aOut..."<< aOut;

	return 0;
}
