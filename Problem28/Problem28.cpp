#include <iostream>
#include<string>

using namespace std;


int readNumber() {
	int num;
	cout << "Enter The Number ?\n";
	cin >> num;
	return num;
}

int calculateSumOddNumbers(int num) {
	int sum = 0;
	cout << "--------------------\n";
	for (int i = num; i >= 1; i--) {
		
		if (i % 2 != 0) {
			sum += i;
		}
			
		
		
	}
	return sum;
}

void printResult(int num) {
	cout << "The Sum : "<<calculateSumOddNumbers(num);
}


int main()
{
	printResult(readNumber());
	

}
