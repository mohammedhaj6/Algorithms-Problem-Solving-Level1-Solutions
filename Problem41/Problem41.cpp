#include <iostream>
#include<string>

using namespace std;


int readNumberOfHours() {
	int numOfHours;
	cout << "Enter The Number Of Hours ? \n";
	cin >> numOfHours;
	return numOfHours;
}

float calculateTheNumberOfWeeks(int numOfHours) {
	return (float)numOfHours / 24 / 7;

}
float calculateTheNumberOfDays(int numOfHours) {
	return (float)numOfHours / 24 ;

}

void printResult(int numOfHours) {
	cout << endl << calculateTheNumberOfWeeks(numOfHours) << " Weeks\n";
	cout << endl << calculateTheNumberOfDays(numOfHours) << " Days\n";

}

int main()
{
	printResult(readNumberOfHours());
}

