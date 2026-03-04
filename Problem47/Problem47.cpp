#include <iostream>
#include<string>

using namespace std;

void readALoanAmountAndMonthlyPayment(int &loanAmount,int &monthlyPayment) {
	cout << "Enter A Loan Amount ?\n";
	cin >> loanAmount;
	cout << "Enter A Monthly Payment ?\n";
	cin >> monthlyPayment;
}

int calculateTotalMonths(int loanAmount , int monthlyPayment) {
	return loanAmount / monthlyPayment;
}

int main()
{
	int loanAmount, monthlyPayment;
	readALoanAmountAndMonthlyPayment(loanAmount, monthlyPayment);
	cout << endl << calculateTotalMonths(loanAmount, monthlyPayment) << " Months\n";
}

