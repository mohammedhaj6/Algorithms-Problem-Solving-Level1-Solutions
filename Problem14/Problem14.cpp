#include <iostream>
#include<string>

using namespace std;

 void readNumbers(int &num1,int &num2) {
	 cout << "Enter The Number 1 ?\n";
	 cin >> num1;
	 cout << "Enter The Number 2 ?\n";
	 cin >> num2;
	 cout << "--------------------------";
}
 void swapNumbers(int &num1 , int &num2) {
	 int temp;
	 temp = num1;
	 num1 = num2;
	 num2 = temp;
 }

 void printResult(int num1 , int num2) {
	 cout <<endl << num1<<endl;
	 cout << endl << num2 << endl;
 }

int main()
{
	int num1, num2;
	readNumbers(num1, num2);
	swapNumbers(num1, num2);
	printResult(num1, num2);


}

