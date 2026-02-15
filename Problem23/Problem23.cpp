#include <iostream>
#include<string>
#include<math.h>
using namespace std;

void readArbitraryTriangle(float& a, float& b, float& c) {
	cout << "Enter a ?\n";
	cin >> a;
	cout << "Enter b?\n";
	cin >> b;
	cout << "Enter c?\n";
	cin >> c;
	cout << "--------------------------";
}

float circleAreaCircleDescribedAroundAnArbitraryTriangle(float a, float b,float c) {
	const float PI = 3.14159265359;
	float p = (a + b + c) / 2;
	return PI *  pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))),2)  ;
}

void printResult(float a, float b,float c) {
	cout << endl << circleAreaCircleDescribedAroundAnArbitraryTriangle(a, b,c) << endl;
}

int main()
{
	float a, b,c;
	readArbitraryTriangle(a, b,c);
	printResult(a, b,c);
}

