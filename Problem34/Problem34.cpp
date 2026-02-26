#include <iostream>
#include<string>

using namespace std;


int readTotalSales() {
	int totalSales;
	cout << "Enter The Total Sales ?\n";
	cin >> totalSales;
	return totalSales;
}

int calculatePercentageFromCommission(int totalSales) {

	if (totalSales>1000000) {
		return totalSales * 0.01;
	}
	else if (totalSales>500000 && totalSales<1000000) {
		return totalSales * 0.02;
	}
	else if (totalSales > 100000 && totalSales < 500000) {
		return totalSales * 0.03;
	}
	else if (totalSales > 50000 && totalSales < 100000) {
		return totalSales * 0.05;
	}
	else {
		return 0;
	}

}

void printResult(int result) {
	cout << "-------------------------------\n";

	cout << result <<endl;
  }



int main()
{
	printResult(calculatePercentageFromCommission(readTotalSales()));
}

