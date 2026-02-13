#include <iostream>
#include<string>
#include<math.h>
using namespace std;

void readNumbers(float& a, float& d) {
	cout << "Enter a ?\n";
	cin >> a;
	cout << "Enter d ?\n";
	cin >> d;
	cout << "--------------------------";
}

float calculateRectangleAreaBySideAndDiagonal(float a, float d) {

	return a * sqrt(pow(d,2)-pow(a,2));
}

void printResult(float a, float d) {
	cout << endl << calculateRectangleAreaBySideAndDiagonal(a, d) << endl;
}


int main()
{
	float a, d;
	readNumbers(a, d);
	printResult(a, d);
}

