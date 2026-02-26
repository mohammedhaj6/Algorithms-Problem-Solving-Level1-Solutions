#include <iostream>
#include<string>

using namespace std;


int readNumber() {
	int num;
	cout << "Enter The Number ?\n";
	cin >> num;
	return num;
}

 void calculatTheNumberToThePowerOf2And3And4(int num) {
	 cout << "-----------------------\n";
	 cout << pow(num, 2) << "," << pow(num, 3) << "," << pow(num, 4) << endl;
	 
}


int main()
{
	calculatTheNumberToThePowerOf2And3And4(readNumber());

}
