#include <iostream>
#include<string>
#include<math.h>
using namespace std;

void readIsoscelesTriangle(float& a, float& b) {
	cout << "Enter a ?\n";
	cin >> a;
	cout << "Enter b?\n";
	cin >> b;
	cout << "--------------------------";
}

float circleAreaInscribedInAnIsoscelesTriangle(float a,float b) {
	const float PI = 3.14159265359;
	return PI*(pow(b,2)/4)*((2*a-b)/(2*a+b));
}

void printResult(float a,float b) {
	cout << endl << circleAreaInscribedInAnIsoscelesTriangle(a,b) << endl;
}

int main()
{
	float a,b;
	readIsoscelesTriangle(a,b);
	printResult(a,b);
}

