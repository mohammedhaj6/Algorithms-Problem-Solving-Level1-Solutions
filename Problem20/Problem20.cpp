#include <iostream>
#include<string>
#include<math.h>
using namespace std;

void readSquareSide(float& a) {
	cout << "Enter a ?\n";
	cin >> a;
	cout << "--------------------------";
}

float circleAreaInscribeedInSquare(float a) {
	const float PI = 3.14159265359;
	return (PI * pow(a, 2)) / 4;
}

void printResult(float a) {
	cout << endl << circleAreaInscribeedInSquare(a) << endl;
}

int main()
{
	float a;
	readSquareSide(a);
	printResult(a);
}

