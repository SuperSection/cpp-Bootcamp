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


/*
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
*/


/*
#include <iostream>
using namespace std;

int main() {

	int rating = 50;

	switch (rating) {
		case 1:
			puts("Rated as 1 star");
			break;
		case 2:
			puts("Rated as 2 star");
			break;
		case 3:
			puts("Rated as 3 star");
			break;
		case 4:
			puts("Rated as 4 star");
			// Fallthrough: It occurs in switch-case statements where when we forget to add a break statement and in that case flow of control jumps to the next line
		case 5:
			puts("Rated as 5 star");
			break;
		default:
			puts("Please rate out app only between 1 and 5");
			break;
	}

	return 0;
}
*/


/*
#include <iostream>
using namespace std;

int main() {

	int my_numbers[] = { 4, 5, 6, 7, 8, 9, 0 };

	int i = 0; // for iteration

	while (i < 7) {
		if (i == 3) {
			// cout << "Special thing" << endl;
			i++;
			continue;
		}
		else
			cout << "Current number is: " << my_numbers[i] << endl;
		i++;
	}

	cout << "outside of the while loop" << endl;

	i = 8;
	// do-while always runs atleat for one time then check the condition
	do {
		cout << "Current number is: " << my_numbers[i] << endl;
		i++;
	} while (i < 7);

	return 0;
}
*/


/*
#include <iostream>
using namespace std;

int main() {

	int my_nums[] = { 2, 3, 4, 5, 6 };

	for (int i = 0; i < 5; i++) {
		cout << my_nums[i] << " ";
	}
	cout << endl;
	cout << "Get a break!" << endl;

	// 'ranged-base for' loop
	for (int i : my_nums) {
		cout << i << endl;
	}

	return 0;
}
*/


/*
#include <iostream>
using namespace std;

int main() {

	char my_string[] = "SuperSection";
	char my_name[] = { 'p', 'a', 'g', 'o', 'l', 0 };
	printf("My name is: %s\n", my_name);

	cout << "take a break\n";

	for (int i = 0; my_string[i] != 0; i++) {
		cout << "Character is: " << my_string[i] << endl;
	}

	// all the non-zero values -> true	&	0(zero) -> false
	for (int i = 0; my_name[i]; i++) {
		cout << my_name[i];
	}
	cout << endl;

	cout << "again take a little break\n";

	// iteration using character pointer
	for (char *cp = my_name; *cp != 0; cp++) {
		cout << "Character is: " << *cp << endl;
	}

	printf("Take another break\n");

	for (char i : my_string) {
		if (i == 0) break;	// to end the loop here, as it reaches the ending point of '0'
		cout << "Char is: " << i << endl;
	}

	return 0;
}
*/



#include <iostream>
using namespace std;

int main() {

	// printf("This size is %ld bits\n", sizeof(double) * 8);

	float my_p_value = 20.2 + 20.2;

	if (my_p_value == 40.400002) {
		puts("You got it right");
	}
	else {
		puts("Something went wrong");
	}

	printf("My precise value is: %.30f in float\n", my_p_value);

	return 0;
}