#include <iostream>
#include<string>

using namespace std;

void readNumbers(int& a, int& b) {
	cout << "Enter a ?\n";
	cin >> a;
	cout << "Enter b ?\n";
	cin >> b;
	cout << "--------------------------";
}

int calculateRectangleArea(int a , int b) {

	return a * b;
}

void printResult(int a,int b) {
	cout << endl << calculateRectangleArea(a, b)<<endl;
}


int main()
{
	int a, b;
	readNumbers(a, b);
	printResult(a, b);
}

