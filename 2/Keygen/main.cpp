#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int serial1, serial2;
	int i = 2;
	int loop = 0x539;

	srand(time(NULL));

	serial2 = rand();
	serial1 = serial2;


	while (loop > 0) {
		serial1 ^= i++;
		loop--;
	}

	printf("serial1: %d\nserial2: %d\n", serial1, serial2);

	system("pause");

}