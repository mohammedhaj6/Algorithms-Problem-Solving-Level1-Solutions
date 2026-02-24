#include <iostream>
#include<string>

using namespace std;


int readNumber() {
	int num;
	cout << "Enter The Number ?\n";
	cin >> num;
	return num;
}

int calculateFactorial(int num) {
	int f = 1;

	cout << "--------------------\n";
	for ( int i = num; i >= 1; i--) {

		f*=i;

	}
	return f;
}

void printResult(int num) {
	cout << "The factorial of "<<num<<" = " << calculateFactorial(num);
}


int main()
{
	printResult(readNumber());


}
