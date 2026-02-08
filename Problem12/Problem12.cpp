#include <iostream>
#include<string>

using namespace std;

void readNumbers(int &num1,int &num2) {
	cout << "Enter The Number 1 ?\n";
	cin >> num1;
	cout << "Enter The Number 2 ?\n";
	cin >> num2;
}

 int getMaxNumbers(int num1,int num2) {

	 if (num1 > num2)
		 return num1;
	 else
		 return num2;
    }

 void printResult(int maxNumbers) {
	 cout << "The Max Numbers >>> " << maxNumbers<<endl;
 }

int main()
{
	int num1, num2;
	readNumbers(num1, num2);
	printResult(getMaxNumbers(num1,num2));
}

