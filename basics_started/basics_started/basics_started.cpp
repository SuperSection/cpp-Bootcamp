/*
#include <iostream>
using namespace std;

int main() {

	int integer_array[4] = { 1, 2, 3, 4 };	// initialization of an array
	cout << integer_array[2] << endl;
	cout << integer_array << endl;

	int another_array[4];
	another_array[0] = 9;
	cout << another_array[0] << endl;
	cout << another_array[1] << endl;

	*another_array = 17; // pointing to the first index of the array
	cout << another_array[0] << endl;

	*(another_array + 1) = 29;
	cout << another_array[1] << endl;

	int *ap = another_array;
	ap++;  // increament according to the continuous memory allocated in the array
	*ap = 5; // here it's indicating the value at index 1 of the array
	cout << another_array[0] << endl;
	cout << another_array[1] << endl;

	return 0;
}
*/


/*
#include <iostream>
#include <cstdint>

using namespace std;

int main() {
	// 1 byte is of 8 bits

	printf("Size of this data type is %zu bits\n", sizeof(int) * 8);
	printf("Size of this data type is %zu bits\n", sizeof(long long) * 8);
	// long int, long long int show some ambiguity (according to your system)

	printf("Size of this data type is %zu bits\n", sizeof(uint16_t) * 8);

	int fun = 510;
	fun = 0b111111110; // binary number representation
	fun = 0x1FE;	   // hexadecimal number representation
	printf("fun value is %d\n", fun);

	return 0;
}
*/


#include <iostream>
using namespace std;

int main() {

	int rating=3;

	if (rating == 5) {
		puts("5 star rated");
	}
	else if (rating == 4) {
		puts("4 star rated");
	}
	else {
		puts("NOT 5 star rated");
	}

	if (true) { 
		// it gets executed if the condition(between parentheses) is true
		puts("Go for it");
	}

	// conditional statement using ternary operator
	printf("Your rating feedback is %s\n", rating < 4 ? "true block" : "false block");

	return 0;
}
