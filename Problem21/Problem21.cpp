#include <iostream>
#include<string>
#include<math.h>
using namespace std;

void readCircumFerence(float& l) {
	cout << "Enter The Circum Ference ?\n";
	cin >> l;
	cout << "--------------------------";
}

float circleAreaAlongTheCircumFerence(float l) {
	const float PI = 3.14159265359;
	return pow(l, 2) / (4 * PI);
}

void printResult(float l) {
	cout << endl << circleAreaAlongTheCircumFerence(l) << endl;
}

int main()
{
	float l;
	readCircumFerence(l);
	printResult(l);
}

