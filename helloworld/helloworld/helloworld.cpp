/*
#include <iostream>
//using namespace std; -> we can use names for objects and variables from the standard library, without specifying every time which library they belong to

int main() {
	std::cout << "Hello There" << std::endl ;
	puts("Above return statement");
	return 0;
	// after 'return' statement, no further below code can get executed
	puts("Below return statement");
}
*/


/*
#include <iostream>
#include <string>
using namespace std;

int main() {

	int number;
	cin >> number;
	printf("Your ID is %d\n", number + 3);

	string my_color;
	cout << "What's your fav.color: \n";
	getline(cin, my_color);
	cout << "Hey " << my_color << " is my fav. too" << endl;


	string firstName, lastName;
	cout << "Enter your first name: \n";
	getline(cin, firstName);
	cout << "Enter your last name: \n";
	getline(cin, lastName);
	cout << "Welcome " << firstName << " " << lastName << " in the C++ Bootcamp!" << endl;

	return 0;
}
*/


/*
#include <iostream>
using namespace std;

int main() {

	int card;
	card = 40;
	int my_card = card;

	int *myp; // declaration
	myp = &card; // store the address of 'card' variable

	my_card = *myp; // pointer dereferecing

	printf("Value of card is: %d\n", my_card);
	printf("Value of myp is: %p\n", myp);
	printf("Value of my_card is: %d\n", my_card);

	return 0;
}
*/


#include <iostream>
using namespace std;

int main() {
	int score = 200;
	int* myp = &score;

	*myp = 100;	// changes the actual value of 'score'

	printf("Value of score is %d\n", score);
	printf("Value of pointer is %p\n", myp);
	
	int& another_score = score;	// reference of 'score' variable
	another_score = 800;
	
	printf("Value of score is %d\n", score);
	printf("Value of pointer is %p\n", myp);

	return 0;
}
