#include <iostream>
#include<string>

using namespace std;



int readNumbers() {
	int num ;
	cout << "Enter The Number ?  \n";
	cin >> num;
	return num;
}

int sumNumbers() {
	int num = 0, sum = 0;
	do {
		num = readNumbers();
		if (num == -99) {
			break;

		}

		sum += num;
	
	}

	while (num != -99);

	return sum;


}
void printResult(int result) {
	cout<<"-----------------------\n" << "The Result = " << result << endl;
}


int main()
{
	
	printResult(sumNumbers());
}

