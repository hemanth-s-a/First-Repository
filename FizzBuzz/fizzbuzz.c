/*

FizzBuzz program
Print numbers 1 to 100.
If the number is a multiple of 3, print Fizz.
If the number is a multiple of 5, print Buzz.
If the number is a multiple of both 3 and 5, print FizzBuzz.
Examples:
1
2
Fizz
4
Buzz and so on.
Print FizzBuzz for number 15.

*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	int i;
	for(i = 1; i <= 100; i++) {
		if(i % 3 == 0) {
			if(i % 5 == 0) {
				printf("FizzBuzz\n");
			} else {
				printf("Fizz\n");
			}
		} else if(i % 5 == 0) {
			printf("Buzz\n");
		} else {
			printf("%d\n", i);
		}
	}
	return 0;
}

