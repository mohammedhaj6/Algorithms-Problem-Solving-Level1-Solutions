#include <iostream>
#include<string>
#include<math.h>
using namespace std;

void readDiameter(float& d) {
	cout << "Enter r ?\n";
	cin >> d;
	cout << "--------------------------";
}

float circleArea(float d) {
	const float PI = 3.14159265359;
	return (PI * pow(d, 2))/4;
}

void printResult(float d) {
	cout << endl << circleArea(d) << endl;
}

int main()
{
	float d;
	readDiameter(d);
	printResult(d);
}

