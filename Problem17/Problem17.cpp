#include <iostream>
#include<string>
#include<math.h>
using namespace std;

void readNumbers(float& a, float& h) {
	cout << "Enter a ?\n";
	cin >> a;
	cout << "Enter h ?\n";
	cin >> h;
	cout << "--------------------------";
}

float triangleArea(float a, float h) {

	return 0.5*a*h;
}

void printResult(float a, float h) {
	cout << endl << triangleArea(a, h) << endl;
}


int main()
{
	float a, h;
	readNumbers(a, h);
	printResult(a, h);
}

