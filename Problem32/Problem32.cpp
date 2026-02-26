#include <iostream>
#include<string>

using namespace std;


void readNumberAndPower(int &num , int &M) {
	
	cout << "Enter The Number ?\n";
	cin >> num;
	cout << "Enter The Power ?\n";
	cin >> M;

}

int calculatTheNumberToThePowerOfM(int num , int M) {
	cout << "-----------------------\n";
	int result = pow(num, M);
	return result;

}

void printResult(int result) {
	cout << endl << result<<endl;
}

int main()
{
	int num, M;
	readNumberAndPower(num, M);
	
	printResult(calculatTheNumberToThePowerOfM(num, M));

}
