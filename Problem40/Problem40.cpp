#include <iostream>
#include<string>

using namespace std;


int readBillValue() {
	int billValue;
		 cout << "Enter your Bill Value ? \n";
		 cin >> billValue;
		 return billValue;
}

 float addServiceFeeAndSalesTax(int billValue) {
	return (float) (billValue * 1.1) * 1.16;
}

void printResult(int billValue) {
	cout <<endl<< "The Total Bill is : " << addServiceFeeAndSalesTax(billValue)<<endl;

}

int main()
{
	printResult(readBillValue());

}

