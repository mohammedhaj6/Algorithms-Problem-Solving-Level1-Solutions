#include <iostream>
#include<string>
using namespace std;

int readAge() {
	int age;
	cout << "Please enter age between 18 and 45 ?\n";
	cin >> age;
	return age;
}

bool validateNumberInRange(int number, int from, int to) {

	return(number >= from && number <= to);

}

int readUntilAgeBetween(int from, int to) {
	int age = 0;
	do
	{
		age = readAge();
	} while (!validateNumberInRange(age, from, to));

	return age;
}

void printResult(int age) {
	if (validateNumberInRange(age, 18, 45))
		cout << endl << age << " Is a valid age \n";
	else
		cout << endl << age << " Is a Invalid age \n";
}

int main()
{
	printResult(readUntilAgeBetween(18,45));

}

