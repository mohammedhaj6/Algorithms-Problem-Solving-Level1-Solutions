#include <iostream>
#include<string>

using namespace std;


int readNumber() {
	int num;
	cout << "Enter The Number ?\n";
	cin >> num;
	return num;
}
void printNumber(int num) {
	cout << "--------------------\n";
	for (int i = num; i >= 1; i--) {
		cout << i << endl;
	}
}


int main()
{
	int num = readNumber();
	printNumber(num);

}
