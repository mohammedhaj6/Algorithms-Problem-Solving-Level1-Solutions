#include <iostream>
#include<string>
#include<math.h>
using namespace std;

void readRadious(float& r) {
	cout << "Enter r ?\n";
	cin >> r;
	cout << "--------------------------";
}

float circleArea(float r) {
	const float PI = 3.14159265359;
	return PI*pow(r,2)  ;
}

void printResult(float r) {
	cout << endl << circleArea(r) << endl;
}

int main()
{
	float r;
	readRadious(r);
	printResult(r);
}

