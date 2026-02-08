#include <iostream>
#include<string>

using namespace std;

void readNumbers(int& num1, int& num2,int &num3) {
	cout << "Enter The Number 1 ?\n";
	cin >> num1;
	cout << "Enter The Number 2 ?\n";
	cin >> num2;
	cout << "Enter The Number 3 ?\n";
	cin >> num3;
}

int getMaxNumbers(int num1, int num2 , int num3) {

	if (num1 >= num2 && num1 >= num3)
		return num1;
	else if (num2 >= num1 && num2 >= num3)
		return num2;
	else
		return num3;
	
}

void printResult(int maxNumbers) {
	cout << "The Max Numbers >>> " << maxNumbers << endl;
}

int main()
{
	int num1, num2,num3;
	readNumbers(num1, num2,num3);
	printResult(getMaxNumbers(num1, num2,num3));
}

